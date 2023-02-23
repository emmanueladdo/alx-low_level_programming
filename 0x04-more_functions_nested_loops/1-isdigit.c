#include "main.h"
/**
 *_isdigit - Checks for digits and return 1,0 if not
 * Return: - 1 if true else 0
 * @c: char type to return
 *
 */
int _isdigit(int c)
{
	if (c > 47 && c < 57)
		return (1);
	else
		return (0);
}
