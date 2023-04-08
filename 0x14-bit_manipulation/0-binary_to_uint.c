#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - coverts to binary 
 *@b: pointer to 1 and 0 chars
 *Return: the converted number 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if ( b == NULL)
		return (0);
	/*determine the length of the input string */
	while(b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	/*converts the binary string to unsigned int */
	while (*b != '\0')
	{
		num = (num << 1) + (*b - '0');
		b++;
	}
	return (num);
}
