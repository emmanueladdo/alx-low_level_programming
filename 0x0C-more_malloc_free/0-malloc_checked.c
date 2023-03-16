#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: unsigned int memory size
 *Return: returns void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr; /* void pointer to be returned*/

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
