#include <stdio.h>
/**
 * main - to print the hexagonal digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int u, v;
for (u = 0; u <= 9; u++)
{
	putchar((u % 10) + '0');
}
for (v = 'a'; v <= 'g'; v++)
{
	putchar((v % 10) + '0');
}
	putchar('\n');
return (0);
}
