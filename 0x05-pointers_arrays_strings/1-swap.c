#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: first int type pointer
 * @b: second int type pointer
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
