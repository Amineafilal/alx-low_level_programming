#include "lists.h"

/**
 * list_len - Write a function that returns the number of elements in a linked.
 * @h: a pointer to a singly linked list node structure.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			h = h->next;
			count++;
		}
	}
	return(count);
}
