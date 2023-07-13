#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a specific message
 * to the standard error.
 * The message is "and that piece of art is useful" -
 * Dora Korpar, 2015-10-19,
 * followed by a new line.
 *
 * Return: Always 1 (indicating an error)
 */

int main(void)
{
	char *message = "and that piece of art is
		useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 52);  /* 2 represents the standard error file descriptor */
	return (1);
}
