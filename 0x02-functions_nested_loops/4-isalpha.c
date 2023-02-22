#include "main.h"
/**
 * _isalpha - to check if a character is an alphabet
 * @c: The character to be checked
 * Return: 1 is c is an alphabet. Otherwise 0
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
