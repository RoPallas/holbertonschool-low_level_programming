#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: count
 * @argv: strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, n = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
			n++;
	}
	printf("%d\n", n);
	return (0);
}
