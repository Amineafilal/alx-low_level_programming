#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to head of the list.
 * @index: input value
 * Return: return value null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}
