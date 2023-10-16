#include "main.h"
/**
 * rev_string - entry point
 * @s: integer value
 * Description: Write a function that reverses a string.
*/
void rev_string(char *s)
{
	int lenght = 0;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{}
	for (int i = 0; j = lenght - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
