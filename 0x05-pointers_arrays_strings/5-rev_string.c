#include "main.h"

/**
 * rev_string - reverse a string to standard output
 * @s: char pointer
 * Return: no return value
 */
void rev_string(char *s)
{
	int counter, i, b, half;
	char tmp;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	b = counter;
	half = b / 2;

	for (counter--, i = 0; i < half; counter--, i++)
	{
		tmp = s[counter];
		s[counter] = s[i];
		s[i] = tmp;
	}
}
