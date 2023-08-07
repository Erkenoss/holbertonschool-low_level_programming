#include "main.h"

/**
 * read_textfile - read a texte
 *
 * @filename: the text we want to read
 * @letters: the nomber of letters in the text
 *
 * Return: The numbers of letter display or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char ptr;
	int fd = 0;
	size_t letters_read = 0;
	ssize_t ret = 0;

	if (filename == NULL || letters <= 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	while (letters_read < letters && read(fd, &ptr, 1) == 1)
	{
		if (write(STDOUT_FILENO, &ptr, 1) != 1)
		{
			close(fd);
			return (0);
		}
		letters_read++;
	}
	close(fd);
	ret = letters_read;
	return (ret);
}
