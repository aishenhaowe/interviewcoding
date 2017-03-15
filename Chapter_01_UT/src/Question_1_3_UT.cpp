#include "Question_1_3.h"
#include "gtest/gtest.h"

TEST(Question_1_3_TEST, testcase01)
{
	char *str1 = "abc";
	char *str2 = "bca";

	ASSERT_EQ(true, Question_1_3().StringValidate(str1, str2));
}

TEST(Question_1_3_TEST, testcase02)
{
	char *str1 = "abcd";
	char *str2 = "bca";

	ASSERT_EQ(false, Question_1_3().StringValidate(str1, str2));
}

TEST(Question_1_3_TEST, testcase03)
{
	char *str1 = "abd";
	char *str2 = "bca";

	ASSERT_EQ(false, Question_1_3().StringValidate(str1, str2));
}
