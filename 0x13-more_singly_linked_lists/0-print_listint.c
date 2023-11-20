#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list_t list.
 * @h: a pointer to a singly linked list node structure.
 * Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
