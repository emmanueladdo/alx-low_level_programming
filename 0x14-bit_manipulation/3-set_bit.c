#include "main.h"
/**
 *set_bit - sets value of a bit to 1 at a given index
 *@n: decimal passsed by pointer
 *@index: index position
 *Return: 1 if it worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pr;

	if (index > 64)
		return (-1);
	for (pr = 1; index > 0; index--, pr *= 2)
		;
	*n += pr;

	return (1);
}
