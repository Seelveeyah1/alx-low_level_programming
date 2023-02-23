#include "main.h"
/**
 * more_numbers - entry point
 * Description: prints 10 times the numbers ranging from
 * 0 to 14
 */

void more_numbers(void)
{
	int num;
	int count = 0;

	while (count++ <= 9)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
			_putchar('\n');
		}
	}
}
