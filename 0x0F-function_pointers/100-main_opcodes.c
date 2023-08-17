#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, or appropriate error code on
 * failure
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_func = (unsigned char *)main;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_func[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
