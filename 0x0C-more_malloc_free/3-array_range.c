#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from
 * min to max.
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: Pointer to the newly created array,
 * or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *new_array;
	int size, value, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	new_array = malloc(size * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	value = min;
	for (i = 0; i < size; i++, value++)
		new_array[i] = value;

	return (new_array);
}
