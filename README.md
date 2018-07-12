# CredDefense
Credential and Red Teaming Defense for Windows Environments

For an overview on features and usage, please see:

https://www.blackhillsinfosec.com/the-creddefense-toolkit/

# CCCredDefense Merge
Significant changes merged from the Columbus Collaboratory's fork of the Credential and Red Teaming Defense for Windows Environments.

The primary work that CC did centered around EasyPasswordFilter.dll.  CC re-implemented the code so that the Windows function "SecureZeroMemory" can be called on all temporary copies of the password.  CC also added support for Unicode characters.  The input dictionary file should contain UTF-8 encodings.  CC also added some unit tests, to test the new functionality.

Note the recommendation to use SecureZeroMemory here:

https://msdn.microsoft.com/en-us/library/windows/desktop/ms721884(v=vs.85).aspx
