#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first char string
 * @src: second char string
 * @n: maximum number of characters to be appended
 * Return: pointer to resulting to first string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && n > 0)
	{
		dest[i] = src[c];
		c++;
		i++;
		n--;

	}
	dest[i] = '\0';
	return (dest);
}
