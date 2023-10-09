#include <stdio.h>
/**
 * main- entry point
 * Description : Write a program that prints the lowercase.
 * Return: 0
*/
int main(void)
{
	int i, d;

	for (i = 48; i <= 57; i++)
	{
		for (d = 48; d <= 57; d++)
		{
			if (i != d && i < d)
			{
				putchar(i);
				putchar(d);
					if (i != 56 || d != 57)
						{
						putchar(',');
						putchar(' ');
						}
			}
		}
	}
	putchar('\n');
	return (0);
}
