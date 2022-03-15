#include "main.h"

/**
 * times_table - prints the 9 table
 *
 *  Description: prints all the nine table
 * Return: Always (0).
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			}
			product = x * y;
			_putchar(',');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(product + 48);
			}
		}
		_putchar('\n');
	}
}