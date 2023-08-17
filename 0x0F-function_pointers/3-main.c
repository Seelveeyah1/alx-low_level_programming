#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the calculator program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, or appropriate error code on
 * failure
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);

	int (*func)(int, int) = get_op_func(operator);

	if (!func)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", func(num1, num2));
	return (0);
}
