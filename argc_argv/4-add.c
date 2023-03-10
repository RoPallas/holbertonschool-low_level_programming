#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: args
 *
 * Return: 0 for succes, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *argv[j] != '\0'; j++)
		{
			if (!isdigit(*argv[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
