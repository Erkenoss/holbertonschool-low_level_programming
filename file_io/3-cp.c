#include "main.h"

/**
 * main - call the code
 *
 * @argc: nbr of argument
 * @argv: different arguments
 *
 * Return: the size of the content
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_write(argv[1], argv[2]);
	return (0);
}

/**
 * read_write - copy the content of a file in an other file
 *
 * @src: file src
 * @dest: file dest
 *
 * Return: no return, void function
 */

void read_write(const char *src, const char *dest)
{
	char buffer[BUFFER_SIZE];
	int fd_src, fd_dest = 0;
	ssize_t bytes_read = 0;

	fd_src = open(src, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		_close(fd_src);
		exit(99);
	}
	while ((bytes_read = read(fd_src, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_dest, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			_close(fd_src);
			_close(fd_dest);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		_close(fd_src);
		_close(fd_dest);
		exit(98);
	}
	_close(fd_src);
	_close(fd_dest);
}

/**
 * _close - close files
 *
 * @fd: fd to close
 *
 * Return: No return, void function
 */

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
