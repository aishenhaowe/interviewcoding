#include "Chapter_01.h"


void Chapter_01::Run()
{
	string str1 = "Hello";
	cout << str1 << "---->" << result(this->isUniqueChars(str1)) << endl;

	string str2 = "abcdefg";
	cout << str2 << "---->" << result(this->isUniqueChars2(str2)) << endl;
}

bool Chapter_01::isUniqueChars(const string& str)
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

bool Chapter_01::isUniqueChars2(const string& str)
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

string Chapter_01::result(bool value)
{
	string result = value ? "TRUE" : "FALSE";

	return result;
}