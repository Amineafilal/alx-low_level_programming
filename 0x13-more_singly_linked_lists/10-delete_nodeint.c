#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node at index.
 * @head: a pointer to a singly linked list node structure.
 * @index: input value.
 * Return: the number of nodes.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *nodeindex;
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	nodeindex = *head;
	for (i = 0; i < index - 1 && nodeindex != NULL; i++)
	{
		nodeindex = nodeindex->next;
	}
	if (nodeindex == NULL ||  nodeindex->next)
	{
		return (-1);
	}
	temp = nodeindex->next;
	nodeindex->next = temp->next;
	free(temp);
	return (1);
}
