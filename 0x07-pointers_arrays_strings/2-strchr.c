#include "main.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: input
 * @c: input
 * Return: Return the value of s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	;
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}
