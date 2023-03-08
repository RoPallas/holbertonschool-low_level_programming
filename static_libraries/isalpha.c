#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to evaluate
 *
 * Return: If c is a letter 1, otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
