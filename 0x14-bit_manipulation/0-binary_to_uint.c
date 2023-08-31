#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an
 * unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if invalid or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;
	unsigned int base = 1;
	int length = 0;
	int i;

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		result += (b[i] - '0') * base;
		base *= 2;
	}

	return (result);
}
