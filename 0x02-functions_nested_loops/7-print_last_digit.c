#include "main.h"
/**
 * print_last_digit - To print the last digit of a number
 *
 * Description: function that prints the last digit
 *
 * @h:number which the last digit is to be computed
 * Return: last digit
 */

int print_last_digit(int h)
{
int last_digit;

last_digit = h % 10;

if (last_digit < 0)
{
	last_digit = last_digit * -1;
}
else
{
	_putchar(last_digit + '0');
}
return (last_digit);
}
