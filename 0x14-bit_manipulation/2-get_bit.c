#include "main.h"
#include "stdio.h"
/**
 *get_bit - get the value of the bit at given index
 *@n: number to examine
 *@index: index start from 0 of the bit we want
 *Return: value of bit at the index or -1 as error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = n >> index;

	return (temp & 1);
}
