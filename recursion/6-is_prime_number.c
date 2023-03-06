#include "main.h"

/**
 * prime - returns 1 if the input int es a prime number,
 * otherwise return 0.
 * @n: number
 * @i: test number
 *
 * Return: 1 or 0
 */
int prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i > 0)
		return (prime(n, ++i));
	else
		return (0);
}

/**
 * is_prime_number - returns 1 if the input int es a prime number,
 * otherwise return 0.
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, 2));
}
