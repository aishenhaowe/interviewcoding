#include "gtest/gtest.h"
#include "Question_1_4.h"

TEST(Question_1_4_TEST, testcase01)
{
	string srcString = "";

	string dstString = Question_1_4().ReplaceString(srcString);

	ASSERT_STREQ(dstString.c_str(), srcString.c_str());
}
