#include "main.h"

/**
 * _abs - entry point
 *
 * Description: function that computes the absolute value of an integar
 *
 *@b: the integar to compute its absolute value
 * Return: returns the abs value
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
