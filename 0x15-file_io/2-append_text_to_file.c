#include "main.h"
/**
 * _strlen - entry point
 * @s : integer value
 * Description: Write a function that returns the length of a string.
 * Return: return n
*/
int _strlen(char *s)
{
	int c = 0;

	if (!s)
	{
	return (0);
	}
	while (*s++)
	{
		c++;
	}
	return (c);
}
/**
 * append_text_to_file - Write a function that appends text.
 * @filename: input value.
 * @text_content: input value.
 * Return: return 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, lenght = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (lenght)
	{
		b = write(fd, text_content, lenght);
	}
	close(fd);
	return (b == lenght ? 1 : -1);
}
