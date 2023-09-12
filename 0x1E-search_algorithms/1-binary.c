#include "search_algos.h"
/**
 *binary_search - func that search for ints in array using binary search
 *@array: poniter to first element of the array
 *@size: number of element in array
 *@value: value to searcch for
 *Return: retunrs (-1) when array is NULL, size is 0,
 *when value io not in array return the value when found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}
	return (-1);
}

