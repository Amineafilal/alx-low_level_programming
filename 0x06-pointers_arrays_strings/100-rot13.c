#include "main.h"
/**
 * *rot13 - Write a function that encodes a string using rot13.
 * @o: input
 * Return: Return the value of o
 */
char *rot13(char *o)
{
	int i;
	char R13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char r13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rpl = o;

	while (*o)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*o == r13[i])
			{
				*o = R13[i];
				break;
			}
		}
		o++;
	}
	return (rpl);
}
