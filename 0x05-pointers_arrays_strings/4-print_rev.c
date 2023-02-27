#include "main.h"

/**
 * print_rev - prints a string to standard output
 * @s: char pointer
 * Return: no return value
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	while (counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
