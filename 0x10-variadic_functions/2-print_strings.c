#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings.
 * @separator: input value
 * @n: input value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_string;
	unsigned int i;
	char *chainestring;

	va_start(list_string, n);
	for (i = 0; i < n; i++)
	{
		chainestring = va_arg(list_string, char*);
		if (chainestring == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", chainestring);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_string);
}
