/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define SIZE 31
char * compare(char *str1, char *str2, int start, int end)
{
	int k = 0, n, flag = 0, i = 0, j = 0, temp = 0;
	char *a;
	a = (char *)malloc(SIZE*sizeof(char));
	for (i = 0; i<31; i++)
	{

		a[i] = '\0';
	}
	n = start;

	while (str2[k] != '\0')
	{

		if (str1[start] != str2[k])
		{
			while ((str2[k] != ' ') && (str2[k] != '\0'))
			{
				k++;
			}
			if (str2[k] == '\0')
			{
				break; temp = 1;
			}
			k++;
		}
		else
		{
			n = start; temp = 0;
			while (str1[n] == str2[k])
			{

				k++; n++;
				if ((((n - 1) == end)) && ((str2[k] == ' ') || (str2[k] == '\0')))

				{
					j = 0;

					for (i = start; i <= end; i++)
					{
						a[j] = str1[i]; flag = 1;
						j++;

					}
					a[j] = '\0';


					break;
				}


			}

			if (flag == 1)
			{

				break;
			}
			while ((str2[k] != ' ') && (str2[k] != '\0'))
			{
				k++;
			}
			if (str2[k] == '\0')
			{
				break;
			}
			k++;
		}

	}

	if (temp != 1)
	{

		return a;
	}
	else
	{
		return NULL;
	}
}
char ** commonWords(char *str1, char *str2) {
	int i = 0, start, end, j = 0, t = 0, l = 0, tem = 0, count = 0;

	char *a;
	char **b;
	b = (char**)malloc(100 * sizeof(char*));

	a = (char *)malloc(SIZE*sizeof(char));
	for (t = 0; t<100; t++)
	{
		for (l = 0; l<31; l++)
		{
			b[t] = (char *)malloc(31 * sizeof(char));
			b[t][l] = '\0';

		}
	}

	if ((str1 == NULL) || (str2 == NULL))
	{
		return NULL;
	}
	while (str1[i] != '\0')
	{
		start = i;
		while ((str1[i] != ' ') && (str1[i] != '\0'))
		{

			i++;
		}
		end = i - 1;
		a = compare(str1, str2, start, end); t = 0; tem = 0;
		while (a[t] != '\0')
		{
			b[j][t] = a[t]; t++; tem = 1; count++;
		}
		b[j][t] = '\0';
		if (tem == 1)
		{
			j++;
		}


		if (str1[i] == '\0')
		{
			break;
		}
		i++;
	}

	if ((b == NULL) || (count == 0))
	{
		return NULL;
	}
	else
	{
		return b;
	}
}
