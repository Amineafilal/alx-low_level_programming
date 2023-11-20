#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a new node.
 * @head: a pointer to a singly linked list node structure.
 * @idx: input value.
 * @n: input value.
 * Return: return the number of nodes.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *nodeindex;
	listint_t *temp = *head;

	nodeindex = malloc(sizeof(listint_t));
	if (nodeindex == NULL)
	{
		return (NULL);
	}
	nodeindex->n = n;
	if (idx == 0)
	{
		nodeindex->next = *head;
		*head = nodeindex;
		return (nodeindex);
	}
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx - 1)
	{
		free(nodeindex);
		return (NULL);
	}
	nodeindex->next = temp->next;
	temp->next = nodeindex;
	return (nodeindex);
}
