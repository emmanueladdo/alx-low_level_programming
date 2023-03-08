#include "main.h"
/**
 *_pow_recursion - function returns the value of x to power y
 *@x: base index
 *@y: power
 *Return: x power y value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
