#include "main.h"
/**
 * more_numbers - entry input
 * Description: Write a function that prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int i, num;

	num = 0;
	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			   _putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
