#include "main.h"
/**
 * swap_int - entry point
 * @a: First integer value
 * @b: Second integer value
 * Description: Write a function that swaps the values of two integers.
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
