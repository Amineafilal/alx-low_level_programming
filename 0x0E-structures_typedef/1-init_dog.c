#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable
 * representing a dog
 * @d: struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
