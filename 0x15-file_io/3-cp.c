#include "main.h"

/**
 * exit_with_error - Display an error message and exit with a specific code.
 * @msg: The error message.
 * @code: The exit code.
 */

void exit_with_error(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(code);
}

/**
 * copy_file - Copies data from one file to another.
 * @file_from: Source file descriptor.
 * @file_to: Destination file descriptor.
 */

void copy_file(int file_from, int file_to)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
	bytes_written = write(file_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
	exit_with_error("Can't write to file", 99);
	}
	}
	if (bytes_read == -1)
	{
	exit_with_error("Can't read from file", 98);
	}
}

/**
 * main - Entry point for the file copying program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the corresponding error code.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		exit_with_error("Usage: cp file_from file_to", 97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		exit_with_error("Can't read from file", 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT |
O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
	{
		close(file_from);
		exit_with_error("Can't write to file", 99);
	}

	copy_file(file_from, file_to);

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		exit_with_error("Can't close file descriptors", 100);
	}

	return (0);
}
