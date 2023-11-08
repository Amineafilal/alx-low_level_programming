#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for the calculator program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success, or an error code on failure
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
