#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a binary number (string of 0 and 1)
 *
 * Return: the converted number or 0 if b more chars that is 1 or 0,
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0, exp = 0, p, res;
	int i, j;

	if (b == NULL)
		return (converted_num);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (converted_num);
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			res = 1;
			if (exp != 0)
			{
				for (p = exp; p >= 1; p--)
					res *= 2;
			}
			converted_num += res;
		}
		exp++;
	}
	return (converted_num);
}
