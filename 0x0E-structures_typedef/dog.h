#ifndef dog_h
#define dog_h
/**
 *struct dog - struct for defination of a dog
 *@name: charatcer string for the dog-name
 *@age: int for dog age
 *@owner: character string for dog owner-name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
