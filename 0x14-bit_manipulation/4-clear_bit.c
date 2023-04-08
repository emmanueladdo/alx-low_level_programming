#include "main.h"
#include "stdio.h"
/**
 *clear_bit - set the value of a bit to Zero at given ind
 *@n: pointer to decimal
 *@index: index position
 *Return: 1 if success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pr;
	unsigned int tmp;

	/*check if index is within range*/
	if (index >= sizeof(*n) * 8)
		return (-1);
	tmp = index;

	for (pr = 1; tmp > 0; pr *= 2, tmp--)
		;
	if ((*n >> index) & 1)
		*n -= pr;

	return (1);
}
