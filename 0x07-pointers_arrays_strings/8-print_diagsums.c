#include "main.h"
/**
 * print_diagsums - Write a function that prints the sum of the two diagonals
 * @a: input
 * @size: input
*/
void print_diagsums(int *a, int size)
{
	int i, sumdiagfirst, sumdiagsecond;

	sumdiagfirst = 0;
	sumdiagsecond = 0;
	for (i = 0; i < size; i++)
	{
		sumdiagfirst += a[i * size + i];
		sumdiagsecond += a[i * size + size - 1 - i];
	}
	printf("%d, %d\n", sumdiagfirst, sumdiagsecond);
}
