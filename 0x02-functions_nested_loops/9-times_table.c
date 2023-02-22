#include "main.h"
/**
 * times_table - function
 * Description: To print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
int row, column, i, j, k;

for (row = 0; row <= 9; row++)
{
	for (column = 0; column <= 9; column++)
	{
		i = row * column;
		j = i / 10;
		k = i % 10;
		if (column == 0)
		{
		_putchar('0');
		}
		else if (i > 10)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(j + '0');
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
}
