#include "main.h"
/**
 * print_alphabet_x10 - to print the alphabet tem times in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{

int count = 0;
char k;
while (count++ <= 9)
{
	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);
	_putchar('\n');
}
}
