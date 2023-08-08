#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory, containing a copy of the string given
 * as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string,
 * or NULL if it fails
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length]; length++)
		;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
