#include "main.h"

/**
 * root - find natural square root of n
 * @n: number
 * @i: number test
 *
 * Return: square root
 */
int root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (root(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root(n, 0));
}
