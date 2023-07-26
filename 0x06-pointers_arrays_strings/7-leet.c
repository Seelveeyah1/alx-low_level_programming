#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */

char *leet(char *str)
{
	char *leet_letters = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j])
			{
			str[i] = leet_replacements[j];
			break;
			}
		}
	}

	return (str);
}
