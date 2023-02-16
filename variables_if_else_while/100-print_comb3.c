#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fd;
	int sd;

	for (fd = 0; fd <= 8; fd++)
	{
		while (sd <= 9)
		{
			putchar(fd + '0');
			putchar(sd + '0');
			if (fd <= 7)
			{
				putchar(',');
				putchar(' ');
			}
			sd++;
		}
		sd = fd + 2;
	}
	putchar('\n');
	return (0);
}
