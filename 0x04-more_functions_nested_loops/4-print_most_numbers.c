#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: prints numbers from 0 to except 2 and 4
 */

void print_most_numbers(void)
{
int i;

	while (i != 2 && i != 4)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
		}
}
