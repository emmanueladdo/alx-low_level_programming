#include "main.h"
/**
 * print_alphabet_x10 - prints lower alphabets using 10x
 * Return: - Always return(0)
 *
 */
void print_alphabet_x10(void)
{
	char a;
	int counter = 1;

	while (counter <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
		_putchar(a);
		a++;
		}
		_putchar('\n');
		counter++;
	}
}
