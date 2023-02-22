#include "main.h"
#include "stdio.h"
/**
 * main - Entry Point for this program
 * Return: return 0
 * Description - fibonancci sequence of 50
 */
int main(void)
{
	int first = 1, second = 2, third, counter;

	printf("%d, %d, ", first, second);/*prints first two*/
		for (counter = 2; counter <= 50; counter++)/*loop start from  2*/
		{
			third = first + second;
			printf("%i, ", third);
			first = second;
			second = third;
		}
		return (0);
}
