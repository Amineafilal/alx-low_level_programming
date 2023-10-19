#include "main.h"
/**
 * *rot13 - Write a function that encodes a string using rot13.
 * @o: input
 * Return: Return the value of o
*/
char *rot13(char *o)
{
	char *start = o;

	while (*o)
	{
		if ((*o >= 97 && *o <= 122) || (*o >= 65 && *o <= 90))
		{
			char base = (*o >= 97 && *o <= 122) ? 97 : 65;
			*o = (*o - base + 13) % 26 + base;
		}
		o++;
	}
	return (start);
}
