#include "main.h"
/**
 * read_textfile - Write a function that reads a text file.
 * @filename: input value.
 * @letters: input value.
 * Return: return value value of the actual number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b;
	char *buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	b = read(fd, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(fd);
	return (b);
}
