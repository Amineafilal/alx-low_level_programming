#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Return the value of count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
