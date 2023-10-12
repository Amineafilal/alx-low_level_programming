#include "main.h"
/**
 * _isupper - entry point
 * Description : Write a function that checks for uppercase character.
 * @c: check input of function
 * Return: 1 if uppercase, 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
