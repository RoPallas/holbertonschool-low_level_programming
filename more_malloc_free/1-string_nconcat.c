#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to concatenates
 *
 * Return: On succes a pointer, on failiure NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len_s1 = 0, len_s2 = 0, i, j, n_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n_s2 = len_s2 - 1;
	else
		n_s2 = n;
	a = malloc(sizeof(char) * (len_s1 + n_s2));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		a[i] = s1[i];
	for (j = i; j < n_s2 + i; j++)
		a[j] = s2[j - i];
	a[j] = '\0';
	return (a);
}
