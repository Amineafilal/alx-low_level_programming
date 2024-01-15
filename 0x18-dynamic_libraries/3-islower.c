#include "main.h"
/**
 * _islower- entry point
 * Description : Write a function that checks for lowercase character.
 * @c: check input of function
 * Return: 1 if lowercase, 0 if not lowercase
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
