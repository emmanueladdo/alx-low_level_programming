#include "main.h"

/**
 * reverse_array - Reverse the content of array
 * @a: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < (n / 2); c++)
	{
		b = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = b;
	}
}
