#include "main.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @o: input
 * Return: Return the value of o
*/
char *cap_string(char *o)
{
	int i;
	int sep = 1;

	for (i = 0; o[i] != '\0'; i++)
	{
		if (sep && ((o[i] >= 97 && o[i] <= 122) || (o[i] >= 65 && o[i] <= 90)))
		{
			if (o[i] >= 97 && o[i] <= 122)
			{
				o[i] = o[i] - 32;
			}
			sep = 0;
		}
		else if (o[i] == '.' || o[i] == '-' || o[i] == '\n' || o[i] == '\t')
		{
			sep = 1;
		}
	}
	return (o);
}
