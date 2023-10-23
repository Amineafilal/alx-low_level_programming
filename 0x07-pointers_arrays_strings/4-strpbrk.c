#include "main.h"
/**
 * *_strpbrk - Write a function that searches a string.
 * @s: input
 * @accept: input
 * Return: Return the value of s
*/
char *_strpbrk(char *s, char *accept)
{
	int j;
	char *ps = s;

	while (*s)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return  (ps);
}
