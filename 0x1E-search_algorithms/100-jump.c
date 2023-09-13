#include "search_algos.h"
/**
 *jump_search - func that search for ints in array using jump search
 *@array: poniter to first element of the array
 *@size: number of element in array
 *@value: value to searcch for
 *Return: retunrs (-1) when array is NULL, size is 0,
 *when value io not in array return the value when found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step;
	size_t i;
	size_t left = 0; /*Initialize the left bound of the search range*/
	size_t right = 0;/*Initialize the right bound of the search range*/
	/*Calculate the jump step*/
	jump_step = (size_t)sqrt(size);

	if (!array || size == 0)
	{
		return (-1); /*handle invalid input*/
	}

	/*perform the jump search*/
	while (right < (size) && array[right] < value)
	{
		printf("Value checked array[%lu] = [%u]\n", right, array[right]);
		left = right;/*Move the left bound to the previous right*/
		right += jump_step;/*Move the right bound by the jump step.*/
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	/*perform liner search btweeb the new range*/
	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
