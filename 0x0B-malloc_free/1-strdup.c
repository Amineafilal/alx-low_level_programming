#include "main.h"
/**
 * *_strdup - Write a function that returns a pointer to a newly allocated.
 * @str: input value
 * Return: Return value of st.
*/
char *_strdup(char *str)
{
	int i, lenght;
	char *st = 0;

	for (i = 0; str[i]; i++)
	{
		lenght++;
	}
	st = malloc(sizeof(char) * (lenght + 1));
	if (st == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	{
		st[i] = str[i];
	}
	st[lenght] = '\0';
	return (st);
}

