#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * followed by a new line
 * @str: The input string
 */

void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
	{
		_putchar('\n');
		break;
	}
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
