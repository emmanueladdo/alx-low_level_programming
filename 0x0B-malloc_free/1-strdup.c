#include "main.h"
#include <stdlib.h>
/**
 *_strdup - duplicate a string with malloc
 *@str: string for duplication
 *Return: pointer to the dumplicate string
 */

char *_strdup(char *str)
{
	char *f;
	int i;
	int c = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	f = malloc(sizeof(*f) * i + 1);
	if (f == NULL)
		return (NULL);
	while (c < i)
	{
		f[c] = str[c];
		c++;
	}
	f[c] = '\0';

	return (f);
}

