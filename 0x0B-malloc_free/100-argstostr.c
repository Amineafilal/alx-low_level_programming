#include "main.h"
/**
 * *argstostr - Write a function that concatenates all the arguments.
 * @ac: input value
 * @av: input value
 * Return: Return value of avp.
*/
char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	char *avp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
	}
	avp = (char *)malloc(length + ac + 1);
	if (avp == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			avp[length] = av[i][j];
			length++;
		}
		avp[length] = '\n';
		length++;
	}
	avp[length] = '\0';
	return (avp);
}
