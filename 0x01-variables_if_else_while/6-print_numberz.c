#include <stdio.h>
/**
 * main - to print the single digits in base ten with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int y;
for (y = 0; y <= 9; y++)
{
	putchar((y % 10) + '0');
}
	putchar('\n');
return (0);
}
