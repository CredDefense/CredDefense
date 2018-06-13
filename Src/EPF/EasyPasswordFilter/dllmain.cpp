//
//
// EasyPasswordFilter is free software; you can redistribute it and / or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// EasyPasswordFilter is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with EasyPasswordFilter; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111 - 1307  USA
//
// --------
// Author: Brian Fehrman (@fullmetalcache)
// Based on the work by: https://github.com/jephthai/OpenPasswordFilter
//
// Author: Kevin White (kwhite@cbuscollaboratory.com)
// Changed to not use C++ strings/hashes when handling password, so that 
// SecureZeroMemory can be used once the temporary copies are finished.
// Add Unicode support.  Currently, assumes the input files contain
// UTF-8.  The password handed to the DLL from Windows is UTF-16.
// 

#include "stdafx.h"
#include "uthash.h"
#include <Windows.h>
#include <WinSock2.h>
#include <ws2tcpip.h>
#include <tchar.h>
#include <string>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <SubAuth.h>
#include <iostream>
#include <fstream>

#define BUFFER_SIZE 1024

struct filter_struct {
	char *key;                    /* key */
	UT_hash_handle hh;            /* makes this structure hashable */
};

#pragma comment(lib, "Ws2_32.lib")
const int INFO_BUFF_SIZE = 32767;
char dictfname[] = "_:\\epf\\epfdict.txt";
char upfname[] = "_:\\epf\\updated.txt";
char exfname[] = "_:\\epf\\exclude.txt";
char exupfname[] = "_:\\epf\\excludeupdated.txt";
TCHAR infoBuf[INFO_BUFF_SIZE];
DWORD bufCharCount = INFO_BUFF_SIZE;

// DLL boilerplate
BOOL __stdcall APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
//	WSADATA wsa;
	FILE *f = NULL;

	GetWindowsDirectory(infoBuf, INFO_BUFF_SIZE);
	dictfname[0] = (char)infoBuf[0];
	upfname[0] = (char)infoBuf[0];
	exfname[0] = (char)infoBuf[0];
	exupfname[0] = (char)infoBuf[0];

	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

//
// Nothing needed here
//
extern "C" __declspec(dllexport) BOOLEAN __stdcall InitializeChangeNotify(void) {
	return TRUE;
}

extern "C" __declspec(dllexport) int __stdcall 
PasswordChangeNotify(PUNICODE_STRING *UserName, 
                     ULONG RelativeId, 
                     PUNICODE_STRING *NewPassword) {
	return 0;
}

// Convert a wide UTF-16 Unicode string to an uppercase UTF-8 string
extern "C" __declspec(dllexport) LPSTR utf16_to_uc_utf8(PUNICODE_STRING utf16_str)
{
	if (utf16_str->Length == 0) {
		LPSTR strTo = (char *)malloc(sizeof(char) * 1);
		strTo[0] = NULL;
		return strTo;
	}

	// Uppercase the utf-16 string
	// Note that UNICODE_STRING's Length doesn't include a final NULL, so we malloc a LPSTR that's
	// one larger, and then set the NULL at the end.
	int uc_size_needed = utf16_str->Length * 2;
	LPWSTR strToUc = (wchar_t *)malloc(sizeof(wchar_t) * (uc_size_needed + 1));
	int strToUcLen = LCMapStringEx(LOCALE_NAME_USER_DEFAULT, LCMAP_UPPERCASE, utf16_str->Buffer, utf16_str->Length, strToUc, uc_size_needed, NULL, NULL, 0);

	// Convert back to utf-8
	int size_needed = WideCharToMultiByte(CP_UTF8, 0, strToUc, strToUcLen, NULL, 0, NULL, NULL);
	LPSTR strTo = (char *)malloc(sizeof(char) * (size_needed + 1));
	int bytes_written = WideCharToMultiByte(CP_UTF8, 0, strToUc, strToUcLen, strTo, size_needed, NULL, NULL);
	strTo[bytes_written] = NULL;

	// Clear out temporary buffers
	SecureZeroMemory(strToUc, (sizeof(wchar_t) * (uc_size_needed + 1)));
	free(strToUc);

	return strTo;
}

// Convert a wide UTF-8 Unicode string to an uppercase UTF-8 string
extern "C" __declspec(dllexport) LPSTR utf8_to_uc_utf8(const char * in_utf8_str)
{
	int in_utf8_len = strlen(in_utf8_str);
	if (in_utf8_len == 0) {
		LPSTR strTo = (char *)malloc(sizeof(char) * 1);
		strTo[0] = NULL;
		return strTo;
	}

	// Convert utf-8 string to utf-16
	int utf16_size_needed = MultiByteToWideChar(CP_UTF8, 0, in_utf8_str, -1, NULL, 0);
	LPWSTR utf16_lc = (wchar_t *)malloc(sizeof(wchar_t) * (utf16_size_needed + 1));
	utf16_size_needed = MultiByteToWideChar(CP_UTF8, 0, in_utf8_str, -1, utf16_lc, utf16_size_needed);
	utf16_lc[utf16_size_needed] = NULL;

	// Uppercase the utf-16 string
	int uc_size_needed = utf16_size_needed * 2;
	LPWSTR strToUc = (wchar_t *)malloc(sizeof(wchar_t) * (uc_size_needed + 1));
	int strToUcLen = LCMapStringEx(LOCALE_NAME_USER_DEFAULT, LCMAP_UPPERCASE, utf16_lc, utf16_size_needed, strToUc, uc_size_needed, NULL, NULL, 0);

	// Convert back to utf-8
	int size_needed = WideCharToMultiByte(CP_UTF8, 0, strToUc, strToUcLen, NULL, 0, NULL, NULL);
	LPSTR strTo = (char *)malloc(sizeof(char) * (size_needed + 1));
	int bytes_written = WideCharToMultiByte(CP_UTF8, 0, strToUc, strToUcLen, strTo, size_needed, NULL, NULL);
	strTo[bytes_written] = NULL;

	// Clear out temporary buffers
	SecureZeroMemory(utf16_lc, (sizeof(wchar_t) * (utf16_size_needed + 1)));
	free(utf16_lc);
	SecureZeroMemory(strToUc, (sizeof(wchar_t) * (uc_size_needed + 1)));
	free(strToUc);

	return strTo;
}

// Convert a wide UTF-16 Unicode string to a UTF-8 string
extern "C" __declspec(dllexport) LPSTR utf8_encode(PUNICODE_STRING utf16_str)
{
	if (utf16_str->Length == 0) {
		LPSTR strTo = (char *)malloc(sizeof(char) * 1);
		strTo[0] = NULL;
		return strTo;
	}
	// Note that UNICODE_STRING's Length doesn't include a final NULL, so we malloc a LPSTR that's
	// one larger, and then set the NULL at the end.
	int size_needed = WideCharToMultiByte(CP_UTF8, 0, utf16_str->Buffer, utf16_str->Length, NULL, 0, NULL, NULL);
	LPSTR strTo = (char *)malloc(sizeof(char) * (size_needed + 1));
//	std::string strTo(size_needed, 0);
	int bytes_written = WideCharToMultiByte(CP_UTF8, 0, utf16_str->Buffer, utf16_str->Length, strTo, size_needed, NULL, NULL);
	strTo[bytes_written] = NULL;
	return strTo;
}

//
// Function used to verify the new password
//
// Checks for updates by looking for a file named update.txt
// If the update file is present, the function reads in the latest
// list of banned passwords. Otherwise, it assumes no changes have
// been made.
//
// https://msdn.microsoft.com/en-us/library/windows/desktop/ms721882(v=vs.85).aspx
// Espically note:
// https://msdn.microsoft.com/en-us/library/windows/desktop/ms721884(v=vs.85).aspx
// 
//
BOOLEAN checkPass(PUNICODE_STRING Password, PUNICODE_STRING AccountName, PUNICODE_STRING FullName) {
	static struct filter_struct *banlist = NULL;    /* important! initialize to NULL */
	static struct filter_struct *exlist = NULL;     /* important! initialize to NULL */

	static size_t smallest_filter = 0;
	//Check for updates
	std::ifstream dictUpdate(upfname);
	if (dictUpdate.is_open() || banlist == NULL) {
		//Clear old list
		struct filter_struct *current_filt, *tmp;
		HASH_ITER(hh, banlist, current_filt, tmp) {
			HASH_DEL(banlist, current_filt);  /* delete; banlist advances to next */
			free(current_filt);               /* optional- if you want to free  */
		}

		//Make new banlist
		std::ifstream banWords(dictfname);
		std::string line;
		if (banWords)
		{
			while (std::getline(banWords, line))
			{
				if (line.length() > 2)
				{
					char *uc_line = utf8_to_uc_utf8(line.c_str());
					struct filter_struct *f;
					HASH_FIND_STR(banlist, uc_line, f);
					if (f == NULL) {
						f = (struct filter_struct *) malloc(sizeof *f);
						size_t s_size = (strlen(uc_line) + 1) * sizeof(char);
						f->key = (char *) malloc(s_size);
						strcpy_s(f->key, s_size, uc_line);
						if ((smallest_filter == 0) || (strlen(f->key) < smallest_filter)) {
							smallest_filter = strlen(f->key);
						}
						HASH_ADD_KEYPTR(hh, banlist, f->key, strlen(f->key), f);
					}
					else {
						// Name already exists, don't add it again
					}
					free(uc_line);
				}
			}
			//Cleanup
			banWords.close();
		}
		dictUpdate.close();
		remove(upfname);
	}

	std::ifstream exUpdate(exupfname);
	if (exUpdate.is_open()) {
		//Clear old list
		struct filter_struct *current_filt, *tmp;
		HASH_ITER(hh, exlist, current_filt, tmp) {
			HASH_DEL(exlist, current_filt);   /* delete; exlist advances to next */
			free(current_filt);               /* optional- if you want to free  */
		}

		//Make new exlist
		std::ifstream exAcc(exfname);
		std::string line;
		if (exAcc)
		{
			while (std::getline(exAcc, line))
			{
				if (line.length() > 2)
				{
					char *uc_line = utf8_to_uc_utf8((LPSTR)line.c_str());
					struct filter_struct *f;
					HASH_FIND_STR(exlist, uc_line, f);
					if (f == NULL) {
						f = (struct filter_struct *) malloc(sizeof *f);
						size_t s_size = (strlen(uc_line) + 1) * sizeof(char);
						f->key = (char *)malloc(s_size);
						strcpy_s(f->key, s_size, uc_line);
						HASH_ADD_KEYPTR(hh, exlist, f->key, strlen(f->key), f);
					}
					else {
						// Name already exists, don't add it again
					}
					free(uc_line);
				}
			}
			//Cleanup
			exAcc.close();
		}
		exUpdate.close();
		remove(exupfname);
	}

	//Copy parameters into a string format
	char *currAcc = utf16_to_uc_utf8(AccountName);
	char *currFn = utf16_to_uc_utf8(FullName);

	//exceptions for accounts
	struct filter_struct *f;
	HASH_FIND_STR(exlist, currAcc, f);
	struct filter_struct *g;
	HASH_FIND_STR(exlist, currFn, g);
	if (f != NULL || g != NULL)
	{
		free(currAcc);
		free(currFn);
		return TRUE;
	}

	char *currPass = utf16_to_uc_utf8(Password);

	//Check if password is in the banlist, return FALSE if so
	HASH_FIND_STR(banlist, currPass, f);
	if (f != NULL) {
		free(currAcc);
		free(currFn);
		SecureZeroMemory(currPass, strlen(currPass) * sizeof(char));
		free(currPass);
		return FALSE;
	}

	int i;
	bool stop = false;
	// Use pointers to make substrings.  "s" is the start, starts at the first character
	// of the string and stops at the final "smallest_filter" characters. "e" is the end.
	// Start "e" at "s" plus "smallest_filter" (so, the shortest string needed).  Replace *e
	// with a null.  Now you have a substring starting at s of length "smallest_filter".
	// Look it up in the hash, replace the null with the original character, and move e one
	// character to the right.  Continue until e is pointing to a null, which will be the original
	// end of the string.  Now, you've found all of the substrings that started at "s" with a length
	// of "smallest_filter" or greater.  Move "s" one character to the right and start all over again.
	// If at any point your substring is in the hash, stop.
	for (char *s = currPass, i = 0; 
		((i <= (strlen(currPass) - smallest_filter)) && !stop); 
		i++, s++) {
		char *e = s + smallest_filter;
		bool enull = false;
		do {
			char tc = *e;
			if (tc == NULL) {
				enull = true;
			}
			*e = NULL;
			struct filter_struct *f;
			HASH_FIND_STR(banlist, s, f);
			*e = tc;
			if (f != NULL) {
				stop = true;
			}
			e++;
		} while (!enull && !stop);
	}
	free(currAcc);
	free(currFn);
	SecureZeroMemory(currPass, strlen(currPass) * sizeof(char));
	free(currPass);
	if (!stop)
		return TRUE;
	else
		return FALSE;
}

//
// Function that is called during the password verification process.
// The password to be checked is passed to checkPass
//
extern "C" __declspec(dllexport) BOOLEAN __stdcall PasswordFilter(PUNICODE_STRING AccountName, 
	                                                              PUNICODE_STRING FullName, 
																  PUNICODE_STRING Password, 
																  BOOLEAN SetOperation) {
	BOOLEAN retVal = TRUE;
	retVal = checkPass(Password, AccountName, FullName);
	return retVal;
}

