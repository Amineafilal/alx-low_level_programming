#include "dog.h"
/**
 * *new_dog - Write a function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * Return: return value of dogPtr
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *dogPtr = &d;

	if (dogPtr != NULL)
	{
		dogPtr->name = name;
		dogPtr->age = age;
		dogPtr->owner = owner;
	}
	return (dogPtr);
}
