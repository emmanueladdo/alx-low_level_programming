#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		a = 0;

		while (a < 15)
		{
			if ( a > 9)
			_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
	}
}
