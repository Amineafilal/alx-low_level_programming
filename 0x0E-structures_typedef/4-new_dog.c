#include "dog.h"
/**
 * _strlen - Write a function that count of lenght.
 * @str: input value
 * Return: return value of s and str
*/
int _strlen(char *str)
{
	const char *s = str;

	while (*s)
	{
		++s;
	}
	return (s - str);
}
/**
 * *_strcopy - Write a function that copy the caractere.
 * @dest: input value
 * @src: input value
 * Return: return value of dest
*/
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - Write a function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * Return: return value of dogPtr
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogPtr = malloc(sizeof(dog_t));

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	if (dogPtr == NULL)
	{
		return (NULL);
	}
	dogPtr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogPtr->name == NULL)
	{
		free(dogPtr);
		return (NULL);
	}
	dogPtr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogPtr->owner == NULL)
	{
		free(dogPtr->name);
		free(dogPtr);
		return (NULL);
	}
	dogPtr->name = _strcopy(dogPtr->name, name);
	dogPtr->age = age;
	dogPtr->owner = _strcopy(dogPtr->owner, owner);
	return (dogPtr);
}
