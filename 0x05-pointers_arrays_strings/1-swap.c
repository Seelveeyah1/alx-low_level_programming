#include "main.h"

/**
 * swap_int - swaps the values of two integars
 *
 * @a: integar a
 * @b: integar b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
