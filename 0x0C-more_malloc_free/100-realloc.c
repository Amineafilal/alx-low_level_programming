#include  "main.h"
/**
 * *memcpy - Write a function that copies memory area.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: Return the value of dest
*/
void *memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;
	char *d = (char *)dest;
	const char *s = (const char *)src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
/**
 * *_realloc - function that reallocates a memory block
 * @ptr: input value
 * @old_size: size of ptr
 * @new_size: size of the newly allocated block of memory.
 * Return: Return value of p
*/

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	else if (new_size <= old_size)
	{
		new_ptr = ptr;
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
