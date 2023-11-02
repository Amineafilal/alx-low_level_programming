#include "main.h"
/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 * @b: size of memory allocate
 * Return: Return value of pb.
*/
void *malloc_checked(unsigned int b)
{
	void *pb;

	pb = malloc(b);
	if (pb == NULL)
	{
		exit(98);
	}
	return (pb);
}
