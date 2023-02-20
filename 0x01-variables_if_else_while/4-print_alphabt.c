#include <stdio.h>
/**
 * main - to print the alphabet in lowercase except q, e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;
for (i = 'a'; i <= 'z'; i++)
{
	if (i != 'e' && i != 'q')
		putchar(i);
}
	putchar('\n');
return (0);
}
