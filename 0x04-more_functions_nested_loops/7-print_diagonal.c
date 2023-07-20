#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character '\' should be
 * printed
 *
 * The diagonal ends with a newline character ('\n')
 * If n is 0 or less, the function only prints a newline
 * character ('\n')
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 1; i < n; i++)
	{
	for (j = 1; j < i; j++)
	{
		_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
	}
	}
}
