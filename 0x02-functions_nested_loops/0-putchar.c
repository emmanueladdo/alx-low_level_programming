#include "main.h"
/**
 * main - Entry point
 * Description - this prnts _putchar with using printf
 * Return: - Always return(0)
 *
 */
int main(void)
{
	char puChar[] = "_putchar";
	int i = 0;

	while (puChar[i] != '\0')
	{
		_putchar(puChar[i]);
		i++;
	}
	_putchar('\n');
return (0);
}
