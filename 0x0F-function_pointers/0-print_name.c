#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a given function
 * @name: Pointer to the name to be printed
 * @f: Pointer to a function that prints a character
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
