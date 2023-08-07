#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: name of a file
 * @text_content: str we want include in the file
 *
 * Return: 1 on success or -1 on failure case
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	size_t index = 0;
	ssize_t bytes_w = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	while (text_content[index] != '\0')
		index++;

	bytes_w = write(fd, text_content, index);
	if (bytes_w == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
