#include "main.h"
/**
 * times_table- prints the 9 times tabble
 * Return: -  0 if succesful
 * row is row, con is column r is results
 *
 */
void times_table(void)
{
int row, con, r;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (con = 1; con <= 9; con++)
		{
			r = (row * con);
			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');

			if (con < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
