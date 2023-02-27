#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: char pointer
 * Return: no return value
 */
void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	 _putchar('\n');
}
