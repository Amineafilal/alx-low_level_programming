#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers.
 * @separator: input value.
 * @n: input value.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_numbers;
	unsigned int i;

	va_start(list_numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_numbers, unsigned int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_numbers);
}
