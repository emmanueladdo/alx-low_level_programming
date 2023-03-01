#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first char string
 * @src: second char string
 * Return: pointer to resulting to first string `dest`
 */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int c = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[c] != 0)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
