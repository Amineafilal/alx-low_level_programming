#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: The result of the addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: The result of the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: The result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Computes the remainder of division
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: The remainder of division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
