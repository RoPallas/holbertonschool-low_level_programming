#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string address
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0, strlen = 0;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	return (strlen);
}
