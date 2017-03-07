#ifndef __CHAPTER_01_H__
#define __CHAPTER_01_H__

#include <string>
#include <iostream>

using namespace std;

class Chapter_01
{
public:
	void Run();

private:
	bool isUniqueChars(const string& str);
	bool isUniqueChars2(const string& str);
	string result(bool value);
};

#endif