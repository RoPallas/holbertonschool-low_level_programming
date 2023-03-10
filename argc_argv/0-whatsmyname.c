#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: count
 * @argv: array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
