#include "main.h"
/**
 * *string_toupper - Write a function that changes all lowercase letters..
 * @o: input
 * Return: Return the value of o
*/
char *string_toupper(char *o)
{
	for (int i = 0; o[i] != '\0'; i++)
	{
		if (o[i] >= 97 && o[i] <= 122)
		{
			o[i] = o[i] - 97 + 65;
		}
	}
	return (o);
}
