#include "main.h"
/**
 * is_prine_number - function for prime numbers
 * @n: is number to examine
 * Return: provde return condition
 */
int is_prime_number(int n)
{
	if (n > 1 && n % 2 != 0)
		return (1);
	else
		return (0);
}
