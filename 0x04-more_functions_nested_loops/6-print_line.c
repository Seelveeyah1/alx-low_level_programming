#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be
 * printed
 *
 * The line ends with a newline character ('\n')
 * If n is 0 or less, the function only prints a
 * newline character ('\n')
 */

void print_line(int n)
{
	if (n <=0)
	{
		_putchar('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
