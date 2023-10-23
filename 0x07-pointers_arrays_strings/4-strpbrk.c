#include "main.h"
/**
 * *_strpbrk - Write a function that searches a string.
 * @s: input
 * @accept: input
 * Return: Return the value of s
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ps = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return  (ps);
}
