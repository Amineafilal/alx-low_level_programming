#include "lists.h"

/**
* delete_dnodeint_at_index - Inserts a new node at a given position.
*@head: Double pointer to the head of the list.
*@index: Index where the new node should be added.
*Return: return 1.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(current);
	return (1);
	}
	for (unsigned int i = 0; i < index; i++)
	{
	if (current == NULL)
		return (-1);
	current = current->next;
	}

	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
		current->next->prev = temp;

	free(current);
	return (1);
}
