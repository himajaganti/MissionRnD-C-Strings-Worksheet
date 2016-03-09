


/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/
#include<stdio.h>
#include<malloc.h>
#include<stddef.h>

int reve(int ip)
{
	int rev = 0, rem;
	while (ip != 0)
	{
		rem = ip % 10;
		rev = rev * 10 + rem;
		ip = ip / 10;
	}
	return rev;
}
void number_to_str(float number, char *str, int afterdecimal)
{
	int ip, ic, fc, i = 0, x, m, j, rem1, rev, fun;
	float fp;
	if (number<0)
	{
		number = -1 * number;
		str[i] = '-'; i++;
	}

	ip = (int)number;
	fp = number - (int)number;
	rev = reve(ip);

	while (rev != 0)
	{
		rem1 = rev % 10;
		str[i] = (rem1 + 48); i++;
		rev = rev / 10;
	}
	if (afterdecimal == 0)
	{
		str[i] = '\0';
	}
	if (afterdecimal != 0)
	{
		str[i] = '.'; i++; x = 10;
		for (m = 0; m<(afterdecimal - 1); m++)
		{
			x = x * 10;
		}
		fc = fp*x;
		ic = (int)fc;
		fun = reve(ic);
		while (fun != 0)
		{
			rem1 = fun % 10;
			str[i] = (rem1 + 48); i++; fun = fun / 10;
		}
	}
	str[i] = '\0';
	

}
