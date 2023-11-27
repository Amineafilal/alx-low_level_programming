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
	ssize_t r, w;
	char *buffer;

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
