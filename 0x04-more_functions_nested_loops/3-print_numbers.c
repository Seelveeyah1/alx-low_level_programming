#include "main.h"
/**
 * print_numbers - entry point
 *
 * Description: function that prints numbers 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
		_putchar('\n');
}
