#include <stdio.h>
/**
 * main - entry point
 * Description :Write a program that finds and prints the largest prime
 * Return: 0 (Success)
*/
int main(void)
{
	long colfactor;
	long num = 612852475143;

	for (colfactor = 2; colfactor <= num; colfactor++)
	{
		if (num % colfactor == 0)
		{
			num /= colfactor;
			colfactor--;
		}
	}
	printf("%ld\n",colfactor);
	return (0);
}
