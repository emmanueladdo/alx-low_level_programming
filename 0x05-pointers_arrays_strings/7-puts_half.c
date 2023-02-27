#include "main.h"

/**
 * puts_half - prints a string to standard output
 * @str: char pointer
 * Return: no return value
 */
void puts_half(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	counter++;
	for (counter /= 2; str[counter] != '\0'; counter++)
	{
		_putchar(str[counter]);
	}
	 _putchar('\n');
}
