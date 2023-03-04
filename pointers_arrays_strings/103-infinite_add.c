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
	int h = 0, len_r, l, d = 0, sum = 0;
	char aux;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;
	if (len_n1 + 1 >= size_r || len_n2 + 1 >= size_r)
		return (0);
	i = len_n1 - 1;
	j = len_n2 - 1;
	while (i >= 0 || j >= 0 || d)
	{
		sum = d;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		d = sum / 10;
		r[h] = sum % 10 + '0';
		h++;
	}
	r[h] = '\0';
	len_r = h - 1;
	for (l = 0; l < len_r / 2; l++)
	{
		aux = r[l];
		r[l] = r[len_r - l];
		r[len_r - l] = aux;
	}
	return (r);
}
