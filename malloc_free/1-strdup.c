#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * wich contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: on succes, a pointer to the duplicated string, else NULL.
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, size = 0;

	while (str[size] != '\0')
		size++;
	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = str[i];
	return (a);
}
