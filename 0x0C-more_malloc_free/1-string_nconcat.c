#include "main.h"
/**
 * *string_nconcat - Write a function that concatenates two strings.
 * @s1: input value.
 * @s2: input value.
 * @n: input value.
 * Return: Return value of result.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lenght;
	char *result = 0;

	lenght = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		lenght++;
	}
	result = (char *)malloc(sizeof(char) * (lenght + 1));
	if (result == 0)
	{
		return (0);
	}
	lenght = 0;
	for (i = 0; s1[i]; i++)
	{
		result[lenght++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		result[lenght++] = s2[i];
	}
	result[lenght] = '\0';
	return (result);
}
