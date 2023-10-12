#include "main.h"
/**
 * _isdigit - entry point
 * Description :Write a function that checks for a digit
 * @c: check input of function
 * Return: 1 if digit, 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
