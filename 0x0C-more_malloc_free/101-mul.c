#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit_string(argv[1]) || !is_digit_string(argv[2]))
{
	printf("Error\n");
	return (98);
}
	int *result = multiply_numbers(argv[1], argv[2]);

	if (result == NULL)
{
	printf("Error\n");
	return (98);
}

	print_number(result);
	printf("\n");

	free(result);

	return (0);
}

int is_digit_string(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

int *multiply_numbers(char *num1, char *num2)
{
	int i, j;
	int len1 = 0, len2 = 0;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	int *result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
	for (j = len2 - 1; j >= 0; j--)
	{
	int mul = (num1[i] - '0') * (num2[j] - '0');
	int sum = mul + result[i + j + 1];
	result[i + j] += sum / 10;
	result[i + j + 1] = sum % 10;
	}
	}

	return (result);
}

void print_number(int *number)
{
	int start = 0;
	
	while (number[start] == 0 && number[start + 1] != '\0')
		start++;

	while (number[start] != '\0')
	{
		_putchar(number[start] + '0');
		start++;
	}
}
