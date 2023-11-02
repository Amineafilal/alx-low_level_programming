#include  "main.h"
/**
 * *_realloc - function that reallocates a memory block
 * @ptr: input value
 * @old_size: size of ptr
 * @new_size: size of the newly allocated block of memory.
 * Return: Return value of p
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	char *p = ptr;
	char *new_p = new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		new_p = malloc(new_size);
		return (new_p);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		new_p = malloc(new_size);
		if (new_p != NULL)
		{
			for (i = 0; i < old_size && i < new_size; i++)
			{
				new_p[i] = p[i];
			}
			free(ptr);
			return (new_p);
		}
		else
		{
			return (NULL);
		}
	}
}
