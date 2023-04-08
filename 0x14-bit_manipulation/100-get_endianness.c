#include "main.h"

/**
 *get_endianness - checks endianness
 *Return: 0 when big endian, or 1 if little endian
 */

int get_endianness(void)
{
	int numb = 1;

	if (*(char *)&numb == 1)
		return (1);
	else
		return (0);
}
