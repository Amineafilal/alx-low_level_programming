#include <stdio.h>
#include <stdlib.h>
/*
 * print_opcodes - Write a program that prints the opcodes.
 * @code: Pointer to the array of opcodes (bytes).
 * @size: Number of bytes to print from the opcodes.
*/
void print_opcodes(unsigned char *code, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", code[i]);
		if (i < size - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
}
/*
 * main - Write a function if the programIt retrieves and-line arguments.
 * @argv: Array of command-line argument strings.
 * @argc: integer variable that holds the number of command-line.
 * Returns: return 0 on success, 1 or 2 in case of errors.
*/
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	void (*func_ptr)() = (void (*)())&main;

	unsigned char *main_opcodes = (unsigned char *)func_ptr;

	print_opcodes(main_opcodes, num_bytes);
	return (0);
}
