#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: array of string characters
 * Return: str
 */
char *leet(char *str)
{
	int i = 0, c;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (c = 0; c <= 7; c++)
		{
			if (str[i] == leet[c] ||
			    str[i] - 32 == leet[c])
				str[i] = c + '0';
		}

		i++;
	}

	return (str);
}
