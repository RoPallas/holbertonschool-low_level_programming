#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match,
 * or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, val1 = 0, val2 = 0, result;

	while (s1[i] != '\0')
	{
		val1 -= s1[i] - '0';
		i++;
	}
	while (s2[j] != '\0')
	{
		val2 -= s2[j] - '0';
		j++;
	}
	if (val1 == val2)
		result = 0;
	else if (val1 > val2)
		result = val1 - val2 + 10;
	else
		result = val1 - val2 - 10;
	return (result);
}
