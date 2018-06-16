# CCCredDefense
This is the Columbus Collaboratory's fork of the Credential and Red Teaming Defense for Windows Environments.

The primary work that we did centered around EasyPasswordFilter.dll.  We re-implemented the code so that the Windows function "SecureZeroMemory" can be called on all temporary copies of the password.  We also added support for Unicode characters.  The input dictionary file should contain UTF-8 encodings.  We also added some unit tests, to test the new functionality.

Note the recommendation to use SecureZeroMemory here:

https://msdn.microsoft.com/en-us/library/windows/desktop/ms721884(v=vs.85).aspx


# CredDefense
Credential and Red Teaming Defense for Windows Environments

For an overview on features and usage, please see:

https://www.blackhillsinfosec.com/the-creddefense-toolkit/

Hey Everyone,

I apologize for the lack of movement on this project. I also apologize for lack of responses. 2017-Q4 and 2018-Q1 were slammed for us and we are just now getting caught back up.

It sounds like we are going to get a week straight to work out the issues on this.

Please keep hanging in there and let us know any thing that you would like to see or have done differently.

Thank you so much for all the support and interest!

Any donations that you can provide, no matter how small, can greatly accelerate updates and fixes for this project.

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=WEL8B9HMRR676)
