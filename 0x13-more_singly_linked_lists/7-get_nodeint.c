#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node.
 * @head: a pointer to a singly linked list node structure.
 * @index: input value.
 * Return: the number of nodes.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodeindex = head;

	if (nodeindex == NULL)
	{
		return (NULL);
	}
	while (index > 0 && nodeindex != NULL)
	{
		nodeindex = nodeindex->next;
		index--;
	}
	return (nodeindex);
}
