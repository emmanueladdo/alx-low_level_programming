#include "main.h"

/**
 * _strncpy - copy a strings to the other
 * @dest: first char string
 * @src: second char string
 * @n: maximum number of characters to be appended
 * Return: pointer to resulting to first string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
