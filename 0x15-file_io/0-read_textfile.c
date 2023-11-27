#include "main.h"
/**
 * read_textfile - Write a function that reads a text file.
 * @filename: input value.
 * @letters: input value.
 * Return: return value value of the actual number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		perror("malloc");
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		perror("read");
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	close(fd);
	free(buffer);
	return (w);
}
