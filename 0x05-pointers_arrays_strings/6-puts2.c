#include "main.h"
/**
 * puts2 - entry point
 * @str: integer value
 * Description:Write a function that prints every other character of a string,
 */
void puts2(char *str)
{
	int c, len;

	len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{}
	for (c = 0; c <= len - 1; c = c + 2)
	{
		putchar(str[c]);
	}
	putchar('\n');
}
