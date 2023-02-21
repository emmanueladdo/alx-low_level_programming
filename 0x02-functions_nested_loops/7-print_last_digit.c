#include "main.h"
/**
 * _print_last_digit - prints last didit
 * Return: -  0 if succesful
 * @n: int value
 *
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = (n % 10) * -1;
		_putchar(num + '0');
	return (num);
	}
	else
	{
		num = n % 10;
		_putchar(num + '0');
	return (num);
	}
}
