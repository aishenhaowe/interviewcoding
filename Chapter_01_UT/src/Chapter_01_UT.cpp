// Chapter_01_UT.cpp : Defines the entry point for the console application.
//

#include "Question_1_1.h"
#include "gtest/gtest.h"

TEST(Question_1_1_METHOD1_TEST, testcase01)
{
	EXPECT_EQ(true, Question_1_1().isUniqueChars("abc"));
}

TEST(Question_1_1_METHOD1_TEST, testcase02)
{
	EXPECT_EQ(false, Question_1_1().isUniqueChars("aabc"));
}
