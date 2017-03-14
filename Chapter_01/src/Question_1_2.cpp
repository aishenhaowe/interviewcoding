#include "Question_1_2.h"

void Question_1_2::Reverse(char *str)
{
	if (nullptr == str)
	{
		return;
	}

	char *head = str;
	char *last = str;

	while (*last)
	{
		last++;
	}
	last--;

	while (head < last)
	{
		char temp = *head;
		*head = *last;
		*last = temp;

		head++;
		last--;
	}
}
