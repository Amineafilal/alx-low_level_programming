#include "main.h"
/**
 * *_strstr - Write a function that locates a character in a string.
 * @haystack: input
 * @needle: input
 * Return: Return the value of NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle)
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				return (needle + i);
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return  (NULL);
}
