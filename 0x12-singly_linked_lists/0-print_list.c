#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer to a singly linked list node structure.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		count++;
		if (h != NULL)
		{
			printf("\n");
		}
	}
	printf("\n");
	return (count);
}
