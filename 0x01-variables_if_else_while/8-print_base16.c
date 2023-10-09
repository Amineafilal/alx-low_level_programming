#include <stdio.h>
/**
 * main- entry point
 * Description : Write a program that prints the lowercase.
 * Return: 0
*/
int main(void)
{
	int n, a;

	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	}
	for (a = 97; a <= 102; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
