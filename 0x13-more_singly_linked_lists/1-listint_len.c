#include "lists.h"

/**
 * listint_len - Write a function that returns the number of elements.
 * @h: a pointer to a singly linked list node structure.
 * Return: the number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
