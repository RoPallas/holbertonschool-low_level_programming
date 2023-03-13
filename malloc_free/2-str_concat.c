#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: On succes, a pointer to a newly allocated space in memory
 * wich contains the contents of s1 and s2. Else return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	a = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		a[i] = s1[i];
	for (j = i; j < len_s1 + len_s2; j++)
		a[j] = s2[j - i];
	a[j] = '\0';
	return (a);
}
