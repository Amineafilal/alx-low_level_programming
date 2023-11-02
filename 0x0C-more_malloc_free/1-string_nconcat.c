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

	lenght = 0;
	if (s1 == "")
	{
		return (NULL);
	}
	if (s2 == "")
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		lenght++;
	}
	result = (char *)malloc(sizeof(char) * (lenght + 1));
	if (result == 0)
	{
		return (0);
	}
	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		result[lenght++] = s2[i];
	}
	result[lenght] = '\0';
	return (result);
}
