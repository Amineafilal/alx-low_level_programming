#include <stdio.h>
/**
 * main - entry point
 * Description :The “Fizz-Buzz test” is an interview question
 * Return : 0
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", i);
			}
			if (i < 100)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}
	return (0);
}
