#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	int c;
	long n = 612852475143;

	for (c = (int) sqrt(n); c > 2; c++)
	{
		if (n % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}

