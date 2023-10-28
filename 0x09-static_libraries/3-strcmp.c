#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: input
 * @s2: input
 * Return: Return a pointer to the resulting  s1 and s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 != '\0' && *s2 != '\0' ; i++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
