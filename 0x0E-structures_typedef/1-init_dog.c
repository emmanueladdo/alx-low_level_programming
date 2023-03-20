#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - function that initialize variables
 *@name: string character for name
 *@age: string character for age
 *@owner: string character for owner
 *@d: struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
