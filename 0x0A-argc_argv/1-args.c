#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments
 * @argc: input value
 * @argv: input value
 * Return: return 0
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
