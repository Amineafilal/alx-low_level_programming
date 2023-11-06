#include "dog.h"
/**
 * free_dog - Write a function that frees dogs.
 * @d: struct of dog
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
