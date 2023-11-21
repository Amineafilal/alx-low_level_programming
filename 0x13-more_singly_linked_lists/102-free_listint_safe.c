#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: a pointer to a singly linked list node structure.
 * Return: return the number of nodes.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
		count++;
	}
	*h = NULL;
	return (count);
}
