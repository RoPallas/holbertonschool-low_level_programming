#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the number to evaluate
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int absValue;

	if (n >= 0)
		absValue = n;
	else
		absValue = n * -1;
	return (absValue);
}
