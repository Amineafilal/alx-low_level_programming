#include "main.h"
/**
 * print_rev - entry point
 * @s: integer value
 * Description: Write a function that prints a string.
*/
void print_rev(char *s)
{
	int c, lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
	}
	for (c = lenght - 1; c >= 0; c++)
	{
		printf("%c", s[c]);
	}
	printf("\n");
}
