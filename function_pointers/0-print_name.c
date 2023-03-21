#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function that prints
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
