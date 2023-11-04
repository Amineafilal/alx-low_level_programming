#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: struct of dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	if (d->name == NULL)
	{
		printf("Name : nil\n");
	}
	else
	{
		printf("Name : %s\n", d->name);
		printf("Age : %f\n", d->age);
		printf("Owner : %s\n", d->owner);
	}
}
