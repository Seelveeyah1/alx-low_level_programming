#include "main.h"

/**
 * _abs - to print the absolute value of an integar
 *@b: the integar for which the value is to be printed
 * Return: Returns the absolute value
 */

int _abs(int b)
{

if (b < 0)
{
	return (b);
}
else if (b > 0)
{
	return (-b);
}
else
{
	return (b);
}
}
