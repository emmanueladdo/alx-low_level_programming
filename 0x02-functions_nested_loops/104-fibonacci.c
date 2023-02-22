#include "main.h"
#include "stdio.h"
/**
 * main - Entry Point for this program
 * Return: return 0
 * Description - fibonancci sequence of 50
 */
int main(void)
{
	unsigned long first = 1, second = 2, third;
	int i;

	printf("%lu, %lu, ", first, second);/*prints first two*/
		for (i = 2; i < 98; i++)/*loop start from  2*/
		{
			if (i == 96)
			{
			third = first + second;
			printf("%lu\n", third);
			}
			else
			{
				third = first + second;
				printf("%lu, ", third);
			}
			first = second;
			second = third;
		}
		return (0);
}
