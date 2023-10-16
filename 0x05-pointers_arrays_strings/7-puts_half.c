#include "main.h"
/**
 * puts_half - entry point
 * @str: Integer value
 * Description: Write a function that prints half of a string.
*/
void puts_half(char *str)
{
	int len, half;

	len = 0;
	for (len = 0; str[len] != '\0' ; len++)
	{}
	half = len / 2;
	for (; half <= len; half++)
	{
		putchar(str[half]);
	}
	putchar('\n');
}
