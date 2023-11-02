#include "main.h"

/**
 * * _realloc - function that reallocates a memory block
 * @ptr: input value
 * @old_size: size of ptr
 * @new_size: size of the newly allocated block of memory.
 * Return: Return value of p
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (new_size < old_size)
		memcpy(p, ptr, new_size);
	else
		memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
