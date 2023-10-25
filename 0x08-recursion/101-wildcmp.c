#include "main.h"

/**
 * wildcmp - Write a function that compares two strings and returns 1.
 * @s1: input value
 * @s2: input value
 * Return: Return the value of s1 and s2
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
