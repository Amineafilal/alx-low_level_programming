#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: a pointer to a singly linked list node structure.
*/
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
