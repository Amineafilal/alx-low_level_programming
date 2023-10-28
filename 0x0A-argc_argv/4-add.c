#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that adds positive numbers.
 * @argc: First integer value
 * @argv: Second integer value
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum +=  atoi(argv[i]);
	}
	printf("%d", sum);
	return (0);
}
