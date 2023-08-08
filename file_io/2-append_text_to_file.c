#include "main.h"

/**
 * append_text_to_file - add text_content in the end of a file
 *
 * @filename: name of a file
 * @text_content: str we want include in the file
 *
 * Return: 1 on success or -1 on failure case
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	size_t index = 0;
	ssize_t bytes_w = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	while (text_content != NULL && text_content[index] != '\0')
		index++;

	bytes_w = write(fd, text_content, index);
	close(fd);
	if (bytes_w == -1)
		return (-1);
	return (1);
}
