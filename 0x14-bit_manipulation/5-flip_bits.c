#include "main.h"
#include <stdio.h>

/**
 *flip_bits - cal the number of bits to be flipped to convert to another
 *@n: The first unsigned long integer
 *@m: the unsigned long to convert @n to
 *Return: the number of bits needed to flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int counter = 0;

	while (dif != 0)
	{
		counter++;
		dif &= (dif - 1); /*clear the least significant set bit*/
	}
	return (counter);
}
