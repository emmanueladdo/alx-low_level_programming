#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: String  for length
 * Return: always return
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
		c = 1 + _strlen_recursion(s + 1);
	else
		return (0);
	return (c);
}
