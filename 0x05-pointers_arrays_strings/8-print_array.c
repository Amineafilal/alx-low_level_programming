#include "main;h"
/**
 * print_array - entry point
 * @a: First integer value
 * @n: Second integer value
 * Description: of integers, followed by a new line.
 */
void print_array(int *a, int n)
{
	int  i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
