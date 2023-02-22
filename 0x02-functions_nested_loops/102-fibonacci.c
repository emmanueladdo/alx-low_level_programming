#include "main.h"
#include "stdio.h"
/**
 * main - Entry Point for this program
 * Return: return 0
 * Description - fibonancci sequence of 50
 */
int main(void)
{
	long int first = 1, second = 2, third;
	int i;

	printf("%ld, %ld, ", first, second);/*prints first two*/
		for (i = 2; i < 50; i++)/*loop start from  2*/
		{
			if (i == 49)
			{
			third = first + second;
			printf("%li\n", third);
			}
			else
			{
				third = first + second;
				printf("%li, ", third);
			}
			first = second;
			second = third;
		}
		return (0);
}
