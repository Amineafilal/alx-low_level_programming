#include "main.h"
/**
 * read_textfile - Write a function that reads a text file.
 * @filename: input value.
 * @letters: input value.
 * Return: return value value of the actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r, w, o;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	close(o);
	free(buffer);
	return (w);
}