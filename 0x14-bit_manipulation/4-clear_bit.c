#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given
 * index.
 * @n: Pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear.
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* Ensure index is within bounds */
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;

	*n &= ~mask;
	return (1);
}
