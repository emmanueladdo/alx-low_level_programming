#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creat a new dog 
 * @name: char string name 
 * @age: int age 
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *copy;
	int i, j, k;
	char *n, *o;

	copy = malloc(sizeof(struct dog));
	if (copy == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(copy);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(copy);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	copy->name = n;
	copy->age = age;
	copy->owner = o;

	return (copy);
}
