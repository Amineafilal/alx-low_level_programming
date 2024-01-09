#include "lists.h"
/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to pointer to head of the list
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistintst *new_next = head->next;

		free(head);
		head = new_next;
	}
}
