/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

#include<stdio.h>
#include<stddef.h>
#include<malloc.h>
char KthIndexFromEnd(char *str, int K)
{
	int i, len = 0, c;
	char s;
	if ((str == NULL) || (K<0)||(str==""))
	{
		return NULL;
	}
	else
	{

		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}

		c = len - (K + 1);
		s = str[c];
		return s;
	}



}