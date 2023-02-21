#include "main.h"
/**
 *_islower - Checks for lower and return 1,0 if not
 * Return: - 1 if true else 0
 * @c: char type to return
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
