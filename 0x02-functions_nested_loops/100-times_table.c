#include "main.h"

/**
 * print_times_table - entry point
 *
 * Description: function that prints the n times table
 *
 * @n: times table to be printed
 *
 * Return: void
 */

void print_times_table(int n)
{
int row, column, i, j, k;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
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
			else if (n > 15 || n < 0)
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
