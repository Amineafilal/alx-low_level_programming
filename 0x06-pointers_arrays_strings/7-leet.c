#include "main.h"
/**
 * *leet - Write a function that encodes a string into 1337.
 * @o: input
 * Return: Return the value of o
*/
char *leet(char *o)
{
	int n[] = {4, 3, 0, 7, 1};
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	char *replace = o;
	unsigned int i;

	for (; *ig; o++)
	{
		for (i = 0; i < sizeof(c) / sizeof(char); i++)
		{
			if (*o == c[i] || *o == c[i] + 32)
			{
				*o = 48 + n[i];
			}
		}
	}
	return (replace);
}
