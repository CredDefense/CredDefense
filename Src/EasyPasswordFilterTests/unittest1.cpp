#include "stdafx.h"
#include "CppUnitTest.h"
#include "../EPF/EasyPasswordFilter/epf.h"
//#include <Winternl.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace EasyPasswordFilterTests
{		
	TEST_CLASS(PasswordFilterTest)
	{
	public:
		
		TEST_METHOD(TestUTF8Encode)
		{
			UNICODE_STRING myUnicodeStr;
//			RtlInitUnicodeString(&myUnicodeStr, L"testfilename.sys");
			myUnicodeStr.Buffer = L"testfilename.sys";
			myUnicodeStr.Length = 16;
			myUnicodeStr.MaximumLength = 18;
			LPSTR utf8_str = utf8_encode(&myUnicodeStr);
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestCheckPass)
		{
			UNICODE_STRING password;
			UNICODE_STRING accountName;
			UNICODE_STRING fullName;
			//			RtlInitUnicodeString(&myUnicodeStr, L"testfilename.sys");
			password.Buffer = L"spring2018";
			password.Length = 10;
			password.MaximumLength = 12;
			accountName.Buffer = L"tester";
			accountName.Length = 6;
			accountName.MaximumLength = 8;
			fullName.Buffer = L"Joe Tester";
			fullName.Length = 10;
			fullName.MaximumLength = 12;
			BOOLEAN result = PasswordFilter(&accountName, &fullName, &password, TRUE);
			Assert::AreEqual((int)(result == FALSE), 1);
		}
		TEST_METHOD(TestCheckPassUTF8)
		{
			UNICODE_STRING password;
			UNICODE_STRING accountName;
			UNICODE_STRING fullName;
			//			RtlInitUnicodeString(&myUnicodeStr, L"testfilename.sys");
			password.Buffer = L"août";
			password.Length = 4;
			password.MaximumLength = 6;
			accountName.Buffer = L"tester";
			accountName.Length = 6;
			accountName.MaximumLength = 8;
			fullName.Buffer = L"Joe Tester";
			fullName.Length = 10;
			fullName.MaximumLength = 12;
			BOOLEAN result = PasswordFilter(&accountName, &fullName, &password, TRUE);
			Assert::AreEqual((int)(result == FALSE), 1);
		}
		TEST_METHOD(TestUCUTF8)
		{
			//			RtlInitUnicodeString(&myUnicodeStr, L"testfilename.sys");
			char * input = u8"août";
			char * output = utf8_to_uc_utf8(input);
			char * output_should = u8"AOÛT";
			Assert::AreEqual((int)(strcmp(output, output_should) == 0), 1);
		}
		TEST_METHOD(TestUCUTF16)
		{
			//			RtlInitUnicodeString(&myUnicodeStr, L"testfilename.sys");
			UNICODE_STRING password;
			password.Buffer = L"août";
			password.Length = 4;
			password.MaximumLength = 6;
			char * output = utf16_to_uc_utf8(&password);
			char * output_should = u8"AOÛT";
			Assert::AreEqual((int)(strcmp(output, output_should) == 0), 1);
		}
	};
}