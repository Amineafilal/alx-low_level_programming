#include "main.h"
/**
 * *_strcpy -antry point
 * @dest: First integer value
 * @src : Second integer value
 * Description: Write a function that copies the string pointed to by src.
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;
	char *affdest = dest;

	while (src[n] != '\0')
	{
		n++;
	}
	for (i = 0; i <= n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (affdest);
}
