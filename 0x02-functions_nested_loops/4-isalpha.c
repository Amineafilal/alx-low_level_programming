#include "main.h"
/**
 * _isalpha- entry point
 * Description : Write a function that checks for lowercase character.
 * @c: check input of function
 * Return: 1 if  lowercase or uppercase, 0 if not  lowercase or not uppercase
*/
int _isalpha(int c)
{
	if (c > 96 && c < 123 || c > 65 && c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
