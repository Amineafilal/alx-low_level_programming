#include "main.h"
/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: input value
 * @s2: input value
 * Return: Return value of result.
*/
char *str_concat(char *s1, char *s2)
{
	int i, lenght, lenght2;
	char *result;

	lenght = 0;
	lenght2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lenght++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		lenght2++;
	}
	result = (char *)malloc(sizeof(char) * (lenght + lenght2 + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		result[lenght + i] = s2[i];
	}
	return (result);
}
