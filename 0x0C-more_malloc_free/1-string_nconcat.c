#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		c[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		c[len++] = s2[index];

	c[len] = '\0';

	return (c);
}
