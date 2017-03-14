#include "Question_1_1.h"


void Question_1_1::Run()
{
	string str1 = "Hello";
	cout << str1 << "---->" << result(this->isUniqueChars(str1)) << endl;

	string str2 = "abcdefg";
	cout << str2 << "---->" << result(this->isUniqueChars2(str2)) << endl;
}

bool Question_1_1::isUniqueChars(const string& str)
{
	if (str.length() > 256)
	{
		return false;
	}

	unsigned int checker = 0;

	for (int i = 0; i < str.length(); i++)
	{
		int value = str[i] - 'a';

		if ((checker & (1 << value)) != 0)
		{
			return false;
		}

		checker |= (1 << value);
	}

	return true;
}

bool Question_1_1::isUniqueChars2(const string& str)
{
	if (str.length() > 256)
	{
		return false;
	}

	bool char_set[256] = { false };

	for (int i = 0; i < str.length(); i++)
	{
		int value = str[i] - 'a';

		if (char_set[i])
		{
			return false;
		}

		char_set[i] = true;
	}

	return true;
}

string Question_1_1::result(bool value)
{
	string result = value ? "TRUE" : "FALSE";

	return result;
}