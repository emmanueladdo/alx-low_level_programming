#include "main.h"
/**
 * print_alphabet - prints lower alphabets using
 * Return: - Always return(0)
 *
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
