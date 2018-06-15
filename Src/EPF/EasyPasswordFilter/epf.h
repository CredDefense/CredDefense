#pragma once

#include <Windows.h>
#include <Winternl.h>

extern "C" __declspec(dllexport) LPSTR utf8_to_uc_utf8(const char * in_utf8_str);
extern "C" __declspec(dllexport) LPSTR utf16_to_uc_utf8(PUNICODE_STRING utf16_str);
extern "C" __declspec(dllexport) LPSTR utf8_encode(PUNICODE_STRING utf16_str);
extern "C" __declspec(dllexport) BOOLEAN __stdcall PasswordFilter(PUNICODE_STRING AccountName,
	PUNICODE_STRING FullName,
	PUNICODE_STRING Password,
	BOOLEAN SetOperation);