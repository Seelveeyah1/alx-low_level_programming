#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: function to print numbers from 0 to 9
 * except 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		while (num != '2' && num != '4')
		{
		_putchar(num);
		}
	}
	_putchar('\n');
}
