#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: between the numbers
 * @n: number of int passed to the func
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arg;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		if (i == n - 1 || separator == NULL)
			printf("%d", arg);
		else
			printf("%d%s", arg, separator);
	}
	printf("\n");
}
