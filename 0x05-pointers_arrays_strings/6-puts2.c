#include "main.h"

/**
 * puts2 - prints a string to standard output
 * @str: char pointer
 * Return: no return value
 */
void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
		{
		_putchar(str[counter]);
		}
		counter++;
	}
	 _putchar('\n');
}
