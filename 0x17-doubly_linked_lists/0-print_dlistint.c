#include "lists.h"
/**
 * print_dlistint -  function that prints all the elements.
 * @h: pointer to the head of list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count_node = 0;
	if (h == NULL)
	{
		return (count_node);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}	
	return (count_node);
}
