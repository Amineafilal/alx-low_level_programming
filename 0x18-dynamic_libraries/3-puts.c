#include "main.h"
/**
 * _puts - entry point
 * @str: integer value
 * Description: Write a function that prints a string.
*/
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		printf("%c", str[c]);
	}
	printf("\n");
}
