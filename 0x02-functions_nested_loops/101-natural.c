#include "main.h"
#include "stdio.h"
/**
 * main - Entry Point for this program
 * Return: return 0
 * Description - computes and prints the sum of multiples of 3 or 5
 */
int main(void)
{
	int a = 1;
	int sum = 0;

		while (a < 1024)
		{
			if (a % 3 == 0 || a % 5 == 0)
			{
				sum += a;
			}
			a++;
		}
			printf("%i\n", sum);

			return (0);
}
