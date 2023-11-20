#include "lists.h"

/**
 * free_listint - Write a function that frees.
 * @head: a pointer to a singly linked list node structure.
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
