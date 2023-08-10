#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory. If malloc
 * fails, the program exits with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}

	return (*allocated_memory);
}
