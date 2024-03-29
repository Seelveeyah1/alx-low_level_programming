#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file and writes text content
 * to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to
 * the file.
 *
 * Return: 1 on success, -1 on failure.
 * -1 is returned if the file cannot be created, written,
 * or if any errors occur.
 * If the file already exists, it will be truncated.
 * If filename is NULL, return -1.
 * If text_content is NULL, create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	mode_t file_mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
