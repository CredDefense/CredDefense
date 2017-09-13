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

#include "stdafx.h"
#include <Windows.h>
#include <WinSock2.h>
#include <ws2tcpip.h>
#include <tchar.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <SubAuth.h>
#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <locale>

#pragma comment(lib, "Ws2_32.lib")
const int INFO_BUFF_SIZE = 32767;
char dictfname[] = "_:\\epf\\epfdict.txt";
char upfname[] = "_:\\epf\\updated.txt";
char logname[] = "_:\\epf\\log.txt";
TCHAR infoBuf[INFO_BUFF_SIZE];
DWORD bufCharCount = INFO_BUFF_SIZE;

// DLL boilerplate
BOOL __stdcall APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
	WSADATA wsa;
	FILE *f = NULL;

	GetWindowsDirectory(infoBuf, INFO_BUFF_SIZE);
	dictfname[0] = (char)infoBuf[0];
	upfname[0] = (char)infoBuf[0];

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

//
// Function used to verify the new password
//
// Checks for updates by looking for a file named update.txt
// If the update file is present, the function reads in the latest
// list of banned passwords. Otherwise, it assumes no changes have
// been made.
//
// 
//
BOOLEAN checkPass(PUNICODE_STRING Password) {
	static std::map<std::string, bool> banlist;
	std::locale loc;
	//Check for updates
	std::ifstream dictUpdate(upfname);
	if (dictUpdate.is_open() || banlist.empty()) {
		//Clear old list
		banlist.erase(banlist.begin(), banlist.end());

		//Make new banlist
		std::ifstream banWords(dictfname);
		std::string line;
		if (banWords)
		{
			while (std::getline(banWords, line))
			{
				if (line.length() > 2)
				{
					for (int i = 0; i < line.length(); ++i)
					{
						line[i] = std::toupper(line[i]);
					}
					banlist[line] = true;
				}
			}
			//Cleanup
			banWords.close();
		}
		dictUpdate.close();
		remove(upfname);
	}
	
	//Copy password into a string format
	int length = Password->Length / sizeof(WCHAR);
	char buff[1024];
	wcstombs(buff, Password->Buffer, length);
	std::string currPass = "";
	for (int i = 0; i < length; i++) {
		currPass += std::toupper(buff[i]);
	}

	//Check if password is in the banlist, return FALSE if so
	if (banlist[currPass]) {
		return FALSE;
	}

	//geeksforgeeks.org/program-print-substrings-given-string/
	for (int len = 4; len <= currPass.length(); len++)
	{
		for (int i = 0; i <= currPass.length() - len; i++)
		{
			std::string tempString = "";
			int j = i + len - 1;
			for (int k = i; k <= j; k++)
			{
				tempString += currPass[k];
			}

			if (banlist[tempString]) {
				return FALSE;
			}
		}
	}
	return TRUE;
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
	retVal = checkPass(Password);
	return retVal;
}

