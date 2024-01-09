#include "lists.h"
/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to pointer to head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_next;

	while (head != NULL)
	{
		new_next = head->next;
		free(head);
		head = new_next;
	}
}
