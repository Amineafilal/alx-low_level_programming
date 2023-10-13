#include "main.h"
/**
 * print_times_table- prints the n time table, starting with 0
 *
 * @n: input
 */
void print_times_table(int n)
{
	int nums, mul, prodcalcul;

	for (nums = 0; nums <= n; nums++)
	{
		if (n <= 15 && n >= 0)
		{
			putchar(48);
			for (mul = 1; mul <= n; mul++)
			{
				prodcalcul = nums * mul;
				putchar(',')i;;

				if (prodcalcul <= 9)
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(prodcalcul + 48);
				}
				else if (prodcalcul <= 99)
				{
					putchar(' ');
					putchar(' ');
					putchar((prodcalcul / 10) + 48);
					putchar((prodcalcul % 10) + 48);
				}

				else
				{
					putchar(' ');

					putchar((prodcalcul / 100) + 48);
					putchar(((prodcalcul - 100) / 10) + 48);
					putchar((prodcalcul % 10) + 48);
				}
			}
			putchar('\n');
		}
	}
}
