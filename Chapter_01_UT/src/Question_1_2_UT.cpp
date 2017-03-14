#include "Question_1_2.h"
#include "gtest/gtest.h"

TEST(Question_1_2_TEST, testcase01)
{
	char *str = nullptr;

	Question_1_2().Reverse(str);
	EXPECT_STREQ(nullptr, str);
}

TEST(Question_1_2_TEST, testcase02)
{
	char str[] = "";

	Question_1_2().Reverse(str);
	EXPECT_STREQ("", str);
}

TEST(Question_1_2_TEST, testcase03)
{
	char str[] = "a";

	Question_1_2().Reverse(str);
	EXPECT_STREQ("a", str);
}

TEST(Question_1_2_TEST, testcase04)
{
	char str[] = "abc";

	Question_1_2().Reverse(str);
	EXPECT_STREQ("cba", str);
}

TEST(Question_1_2_TEST, testcase05)
{
	char str[] = "abcd";

	Question_1_2().Reverse(str);
	EXPECT_STREQ("dcba", str);
}

