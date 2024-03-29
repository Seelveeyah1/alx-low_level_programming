#include "main.h"

/**
 * print_square - Prints a square using the character '#'
 * @size: The size of the square
 *
 * If size is 0 or less, the function only prints a
 * new line ('\n')
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
