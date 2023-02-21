#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Return: - 1 if greater than 0 and returns -1 if less than 0
 * @n: number to return
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_purchar('0');
		return (0);
	}
}
