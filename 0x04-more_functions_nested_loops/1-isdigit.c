#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 *
 * @c:The character to be checked
 *
 * Return: 1 if c is a digit. Otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
