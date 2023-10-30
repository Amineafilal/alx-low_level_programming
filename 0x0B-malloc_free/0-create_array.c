#include "main.h"
/**
 * *create_array - Write a function that creates an array of chars.
 * @size: input value
 * @c: input value
 * Return: Return value of ar.
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	if (ar == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
