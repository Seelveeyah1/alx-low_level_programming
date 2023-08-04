#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_digit - Check if a string contains only
 * positive digits
 * @str: String to check
 * Return: true if all characters are digits, false
 * otherwise
 */

bool is_positive_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	return (true);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (is_positive_digit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
