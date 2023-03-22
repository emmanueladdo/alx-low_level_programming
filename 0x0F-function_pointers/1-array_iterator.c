#include "function_pointers.h"

/**
 * array_iterator - executes a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL || action != NULL)
		while (i < size)
		{
		action(array[i]);
		i++;
		}
}
