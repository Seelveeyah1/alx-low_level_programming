#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The integer value of the string
 */

int _atoi(char *s)
{
	int sign = 1; /* Default sign is positive */
	int result = 0;
	int i = 0;

/* Check for signs at the beginning of the string */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;

		i++;
	}

/* Process the digits in the string */
	while (s[i] != '\0')
	{
	/* Check if the character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
      /* Convert the character to its integer value and add it to the result */
		result = result * 10 + (s[i] - '0');
		}
		else
		{
      /* If a non-digit character is encountered, stop processing */
			break;
		}

		i++;
	}

  /* Apply the sign to the final result */
	result *= sign;

	return (result);
}
