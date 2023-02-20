#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 100; a++)
	{
		b = a / 10;
		c = a % 10;

		putchar(b + '0');
		putchar(c + '0');

		if (a < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
