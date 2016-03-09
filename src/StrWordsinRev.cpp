/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include<stdio.h>
void reverse(char *str, int start, int end)
{
	int i, j, h;
	char temp;
	h = (start + end);
	for (i = start, j = end; i<h / 2, j>h / 2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = temp;
	}

}
void reverse1(char *str, int start, int end)
{
	int i, j, h;
	char temp;
	h = (start + end);
	for (i = start, j = end; i<h / 2, j>h / 2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
void str_words_in_rev(char *input, int len)
{
	int j, i, b = 0, flag = 0, start, end;
	char temp;

	for (i = 0, j = len; i<(len / 2), j>(len / 2); i++, j--)
	{
		temp = input[i];
		input[i] = input[j - 1];
		input[j - 1] = temp;


	}

	start = b; i = 0;
	while (input[i] != '\0')
	{
		start = b;
		while ((input[i] != ' ') && (input[i] != '\0'))
		{
			i++;
		}
		end = i;
		if (input[i] == '\0')
		{
			flag = 1; break;
		}
		if (flag == 0)
		{
			i++;
			b = i;
			reverse(input, start, end);
		}
	}

	start = b;
	if (flag == 1)
	{
		reverse1(input, start, len - 1);
	}

}
