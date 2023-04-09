#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: of the bit
 *
 * Return: 1 if it worked, or -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_to_comp = ~(1UL << index);

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= n_to_comp;
	return (1);
}
