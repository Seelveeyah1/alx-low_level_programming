#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words),
 * or NULL if it fails
 */

char **strtow(char *str)
{
char **words;
int i, j, k, word_count = 0, word_length = 0, start = 0;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
}

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
word_length++;
if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) || str[i + 1] == '\0')
{
words[start] = malloc((word_length + 1) * sizeof(char));
if (words[start])
{
for (j = 0; j < start; j++)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < word_length; k++)
words[start][k] = str[i - word_length + k + 1];
words[start][k] = '\0';
start++;
word_length = 0;
}
}

words[start] = NULL;

return (words);
}
