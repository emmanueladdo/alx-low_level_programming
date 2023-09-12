#include "search_algos.h"
/**
 *linear_search - func that search for ints in array using linear search
 *@array: poniter to first element of the array
 *@size: number of element in array
 *@value: value to searcch for
 *Return: retunrs (-1) when array is NULL, size is 0,
 *when value io not in array return the value when found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

