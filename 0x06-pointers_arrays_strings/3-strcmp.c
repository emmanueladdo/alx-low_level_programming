#include "main.h"

/**
 * _strcmp - compares two stringd
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: pointer to
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
