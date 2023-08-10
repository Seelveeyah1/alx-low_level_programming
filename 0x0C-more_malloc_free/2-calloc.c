#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and sets
 * it to zero.
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: Pointer to the allocated memory,
 * or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	allocated_memory = malloc(total_size);

	if (allocated_memory == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		((char *)allocated_memory)[i] = 0;

	return (allocated_memory);
}
