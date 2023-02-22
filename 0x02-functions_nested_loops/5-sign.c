#include "main.h"
/**
 * print_sign - To print the positive or negative value of a number
 * @n: The number of which the value is to be printed
 * Return: 1 is n is greater than zero. 0 if n is zero. Otherwise -1
 */

int print_sign(int n)
{

if (n > 0)
	{
	_putchar('+');
	return (1);
	}
else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
else
	{
	_putchar('0');
	return (0);
	}
}
