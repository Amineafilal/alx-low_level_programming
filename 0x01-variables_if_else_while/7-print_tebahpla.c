#include <stdio.h>
/**
 * main- entry point
 * Description : Write a program that prints the lowercase.
 * Return: 0
*/
int main(void)
{
	char z;

	for (z = 122; z >= 97; z--)
	{
	putchar(z);
	}
	putchar('\n');
	return (0);
}
