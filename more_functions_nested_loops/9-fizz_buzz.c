#include <stdio.h>

/**
 * main - print the Fizz-Buzz test
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz %d ", i);
			else if (i % 3 == 0)
				printf("Fizz %d ", i);
			else
				printf("Buzz %d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
