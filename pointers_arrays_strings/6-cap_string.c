#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string to capitalizes
 *
 * Return: pointer to string capitalized
 */
char *cap_string(char *s)
{
	int i = 0, j, upper = 0;
	char esp[] = ",;.!?(){}\n\t\" ";

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122 && upper == 1)
		{
			s[i] -= 32;
			upper = 0;
		}
		upper = 0;
		for (j = 0; j <= 12; j++)
		{
			if (s[i] == esp[j])
			{
				upper = 1;
				break;
			}
		}
		i++;
	}
	return (s);
}
