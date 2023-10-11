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
		if (n < 15 && n > 0)
		{
			_putchar(48);
			for (mul = 1; mul <= n; mul++)
			{
				_prodcalcul = nums * mul;
				_putchar(',');

				if (prodcalcul <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prodcalcul + 48);
				}
				else if (prodcalcul <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prodcalcul / 10) + 48);
					_putchar((prodcalcul % 10) + 48);
				}

				else
				{
					_putchar(' ');

					_putchar((prodcalcul / 100) + 48);
					_putchar(((prodcalcul - 100) / 10) + 48);
					_putchar((prodcalcul % 10) + 48);
				}
			}
			_putchar('\n');
		}
}
