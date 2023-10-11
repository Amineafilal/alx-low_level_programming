#include "main.h"
/**
 * print_last_digit- entry point
 * Description : Write a function that prints the last digit of a number..
 * @n: take in integer type input for function
 * Return: return value of last digit
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
	digit = -1 * (n % 10);
	_putchar(digit + '0');
	return (digit);
	}
	else
	{
	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
	}
}
