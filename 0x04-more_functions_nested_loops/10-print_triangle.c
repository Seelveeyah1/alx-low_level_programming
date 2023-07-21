#include "main.h"

/**
 * print_triangle - Prints a triangle using
 * the character '#'
 * @size: The size of the triangle
 *
 * If size is 0 or less, the function only prints
 * a new line ('\n')
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
