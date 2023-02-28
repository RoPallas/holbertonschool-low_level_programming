#include "main.h"

/**
 * _atoi - Convert a string to an interger
 * @s: the string
 *
 * Return: interger
 */
int _atoi(char *s)
{
	int i, a = 0, f, result = 0, d = 1, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			a = i;
			break;
		}
		else if (s[i] == 45)
		{
			c++;
		}
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
		a++;
	}
	f = a - 1;
	while (f >= 0)
	{
		if (s[f] >= 48 && s[f] <= 57)
		{
			result += (s[f] - '0') * d;
			d *= 10;
		}
		f--;
	}
	if (c % 2 == 0)
		return (result);
	else
		return (result * -1);
}
