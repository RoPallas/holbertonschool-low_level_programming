#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first num
 * @b: second num
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first num
 * @b: second num
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first num
 * @b: second num
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns teh result of the division of a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
