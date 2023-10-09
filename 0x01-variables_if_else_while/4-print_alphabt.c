#include <stdio.h>
/**
 * main- entry point
 * Description : Write a program that prints.
 * Return: 0
*/
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
	if (n != 101 && n != 113)
	{
	putchar(n);
	}
	}
	putchar('\n');
	return (0);
}
