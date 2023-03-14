#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an array of char, and initializes with specific char
 *@size: size of array
 *@c: char to be specified
 *Return: char pointer to malloc created memory address
 */
char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	f = malloc(sizeof(*f) * size);
		if (f == NULL)
			return (NULL);
	while (i < size)
	{
		f[i] = c;
		i++;
	}
	return (f);
}
