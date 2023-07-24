#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * print_rev - Prints a string in reverse followed by a
 * new line
 * @s: The input string
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
