#include "main.h"
/**
 *_isupper - Checks for upper and return 1,0 if not
 * Return: - 1 if true else 0
 * @c: char type to return
 *
 */
int _isupper(int c)
{
	if (c > 65 && c < 91)
		return (1);
	else
		return (0);
}
