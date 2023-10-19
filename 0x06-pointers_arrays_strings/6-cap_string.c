#include "main.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @o: input
 * Return: Return the value of o
 */
char *cap_string(char *o)
{
	int i;
	char caps = 1;

	for (i = 0; o[i] != '\0'; i++)
	{
		if (o[i] == '\t')
		{
			o[i] = ' ';
		}
		if (caps)
		{
			if ((o[i] >= 97 && o[i] <= 122) || (o[i] >= 65 && o[i] <= 90))
			{
				if (o[i] >= 97 && o[i] <= 122)
				{
					o[i] = o[i] - 32;
				}
				caps = 0;
			}
		}
		if (o[i] == ' ' || o[i] == '.' || o[i] == '-')
		{
			caps = 1;
		}
	}
	return (o);
}
