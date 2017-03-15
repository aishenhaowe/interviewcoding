#include "stdafx.h"
#include "Question_1_3.h"
#include <string>

using namespace std;

bool Question_1_3::StringValidate(string str1, string str2)
{
	if (str1.length() != str2.length())
	{
		return false;
	}

	int countArray[256] = { 0 };
	for (auto c : str1)
	{
		countArray[c]++;
	}

	for (auto c : str2)
	{
		countArray[c]--;

		if (countArray[c] < 0)
		{
			return false;
		}
	}

	return true;
}
