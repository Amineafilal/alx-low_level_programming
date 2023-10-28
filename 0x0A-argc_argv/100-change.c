#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that prints the minimum number.
 * @argc: First integer value
 * @argv: Second integer value
 * Return: return 0
*/


int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 5;
	int minCoins = 0;
	int i, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			minCoins++;
		}
	}
	printf("%d\n", minCoins);
	return (0);
}
