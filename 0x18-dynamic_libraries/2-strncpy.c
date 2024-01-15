#include "main.h"
/**
 * *_strncpy - Write a function that copies a string.
 * @dest: input
 * @src: input
 * @n: input
 * Return: Return a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (p);
}
