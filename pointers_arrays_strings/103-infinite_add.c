#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0, i, j;
	int h = size_r - 2, aux = 0, sum = 0, exit = 0;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;
	i = len_n1 - 1;
	j = len_n2 - 1;
	while (i >= 0i)
	{
		if (j >= 0)
			sum = (n1[i] - '0') + (n2[j] - '0') + aux;
		else
			sum = (n1[i] - '0') + aux;
		if (h >= 0)
		{
			r[h] = (sum % 10) + '0';
			aux = sum / 10;
			h--;
		}
		else
		{
			exit = 1;
			break;
		}
		if (i == 0)
			r[h] = aux + '0';
		i--;
		j--;
	}
	if (exit == 0)
		return (r);
	else
		return(0);
}
