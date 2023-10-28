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

	i
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multip =  atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multip);
	}
	return (0);
}
