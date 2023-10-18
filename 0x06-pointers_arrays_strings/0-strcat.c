#include "main.h"
/**
 * *_strcat - entry point
 * @dest: First char value
 * @src: Second char value
 * Description: Write a function that concatenates two strings.
 * Return: return the value of char.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *po = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (po);
}
