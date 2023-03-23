#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: a list of types of arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	int count = 0, i = 0;
	char *sep = ", ", *s;
	va_list lp;

	va_start(lp, format);
	while (format && format[count])
		count++;
	while (format && format[i])
	{
		if (i == count - 1)
			sep = "";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(lp, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(lp, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(lp, double), sep);
			break;
		case 's':
			s = va_arg(lp, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, sep);
			break;
		}
		i++;
	}
	printf("\n");
}
