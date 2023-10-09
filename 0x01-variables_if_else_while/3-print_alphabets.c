#include <stdio.h>
/**
 * main- entry point
 * Description : Write a program that prints.
 * Return: 0
*/
int main(void)
{
	char n, y;

	for (n = 97; n <= 122; n++)
	{
	putchar(n);
	}
	for (y = 65; y <= 90; y++)
	{
	putchar(y);
	}
	putchar('\n');

	return (0);
}
