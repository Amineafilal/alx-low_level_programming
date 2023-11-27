#include "main.h"
/**
 * _strlen - entry point
 * @s : integer value
 * Description: Write a function that returns the length of a string.
 * Return: return n
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	return (c);
}
/**
 * create_file - Create a function that creates a file.
 * @filename: input value.
 * @text_content: input value.
 * Return: return -1.
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, close_status;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_status = write(file_descriptor, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close_status = close(file_descriptor);
	if (close_status == -1)
	{
		return (-1);
	}
	return (1);
}
