#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fd = 0, sd = 1, td = 2;

	while (fd <= 7)
	{
		while (sd <= 8)
		{
			while (td <= 9)
			{
				putchar(fd + '0');
				putchar(sd + '0');
				putchar(td + '0');
				if (fd != 7)
				{
					putchar(',');
					putchar(' ');
				}
				td++;
			}
			sd++;
			td = sd + 1;
		}
		fd++;
		sd = fd + 1;
		td = sd + 1;
	}
	putchar('\n');
	return (0);
}
