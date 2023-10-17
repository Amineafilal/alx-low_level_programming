#include "main.h"
/**
 * _atoi - entry point
 * @s: integer value
 * Description: Write a function that convert a string to an integer.
 * Return: return the value of res * sign
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int digit;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if (res > (2147483647 - digit) / 10)
			{
				return (sign == 1 ? 2147483647 : -2147483648);
			}
			res = res * 10 + digit;
		}
	}
	return (res * sign);
}
