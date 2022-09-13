#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 * Return: always 0
 */

void times_table(void)
{
	int x, y, p;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			p = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (p >= 10)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if ((p < 10) && y != 0)
			{
				_putchar(' ');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
