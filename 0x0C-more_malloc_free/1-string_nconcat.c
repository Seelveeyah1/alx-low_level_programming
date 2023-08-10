#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates s1 and first n bytes of s2.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to concatenate from s2
 *
 * Return: Pointer to the concatenated string,
 * or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total_len = 0;
	char *concatenated;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	total_len = len1 + n;
concatenated = malloc((total_len + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';
	return (concatenated);
}
