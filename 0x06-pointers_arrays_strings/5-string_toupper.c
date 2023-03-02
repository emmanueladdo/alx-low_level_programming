#include "main.h"

/**
 * string_toupper - Reverse the content of array
 * @str: array of string characters
 * Return: str
 */
char *string_toupper(char *str)
{
	int ind;

	for (ind = 0; str[ind] != '\0'; ind++)
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;
	}

	return (str);
}
