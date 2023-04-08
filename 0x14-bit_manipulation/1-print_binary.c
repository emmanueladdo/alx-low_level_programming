#include "main.h"
#include <stdio.h>
/**
 *print_binary - prints the binary representation of a number
 *@n: interger decimalto covert to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int shift = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	/* cal the number of shifts needed to represent the number in binary*/
	for (; (temp >>= 1) > 0; shift++)
		;

	/* use shift to print the binary form of n from left to right*/
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
