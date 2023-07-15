#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 1; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(',');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
		}
	}

	putchar('\n'); /* Print a new line */

	return (0);
}
