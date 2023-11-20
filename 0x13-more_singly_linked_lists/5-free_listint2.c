#include "lists.h"

/**
 * free_listint2 - Write a function that frees.
 * @head: a pointer to a singly linked list node structure.
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
	{
	return;
	}
	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
