#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
*/
void times_table(void)
{
	int nums, mult, prod;

	for (nums = 0; nums <= 9; nums++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			prod = nums * mult;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
