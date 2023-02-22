#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */

void times_table(void)
{
int row, column, i, j, k;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			i = row * column;
			j = product / 10;
			k = product % 10;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (i < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (n > 15 && n < 0)
			{
				break;
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
