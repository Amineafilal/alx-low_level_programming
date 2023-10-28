#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: First integer value
 * @argv: Second integer value
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int multip;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		multip =  atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multip);
		return (1);
	}
	return (0);
}
