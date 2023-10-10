#include "main.h"
/**
 * _islower- entry point
 * Description : Write a function that checks for lowercase character.
 * Return: 0
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
