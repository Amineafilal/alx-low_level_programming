#include <stdio.h>
/**
 * main- entry point
 * Description : Write a program that prints the alphabet
 * Return: 0
*/
int main(void)
{
	char n;

	for (n = 97 ; n <= 122; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
