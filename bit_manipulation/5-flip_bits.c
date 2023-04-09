#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the numbers of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_comp = n ^ m;
	unsigned int count = 0;

	while (xor_comp)
	{
		count += xor_comp & 1;
		xor_comp >>= 1;
	}
	return (count);
}
