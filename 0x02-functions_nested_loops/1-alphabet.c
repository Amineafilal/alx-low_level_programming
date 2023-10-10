#include "main.h"
#include <stdio.h>
/**
 * print_alphabet- entry point
 * Description : Write a function that prints the alphabet.
 * Return: None (void)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
