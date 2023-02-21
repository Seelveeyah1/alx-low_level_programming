#include <stdio.h>
/**
 * main - to print the hexagonal digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int u;
for (u = 0; u <= 15; u++)
{
	putchar((u % 10) + '0');
}
	putchar('\n');
return (0);
}
