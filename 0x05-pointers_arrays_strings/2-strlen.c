#include "main.h"

/**
 * _strlen - swaps the values of a and b
 * @s: char pointer
 * Return: no return value
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
		return (counter);
}
