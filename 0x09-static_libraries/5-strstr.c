#include "main.h"
/**
 * *_strstr - Write a function that locates a character in a string.
 * @haystack: input
 * @needle: input
 * Return: Return the value of NULL
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
