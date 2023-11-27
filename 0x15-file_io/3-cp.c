#include "main.h"
/**
 * print_error_and_exit - Write a function that printf an error.
 * @code: input value.
 * @message: input value.
 * @arg: input value.
*/
void print_error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * copy_file - Write a function that copy the content of file.
 * @source_path: input value.
 * @destination_path: input value.
*/
void copy_file(const char *source_path, const char *destination_path)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

fd_from = open(source_path, O_RDONLY);
if (fd_from == -1)
{
	print_error_and_exit(98, "Error: Can't read from file %s\n", source_path);
}
fd_to = open(destination_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
	print_error_and_exit(99, "Error: Can't write %s\n", destination_path);
}
do {
	bytes_read = read(fd_from, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", source_path);
	}
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
		print_error_and_exit(99, "Can't write to file %s\n", destination_path);
	}
} while (bytes_read > 0);
if (close(fd_from) == -1 || close(fd_to) == -1)
{
	print_error_and_exit(100, "Error: Can't close file descriptors\n", "");
}
}
/**
 * main - Write a function that copies the contents of a file.
 * @argc: input value.
 * @argv: input value.
 * Return: return 0.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
