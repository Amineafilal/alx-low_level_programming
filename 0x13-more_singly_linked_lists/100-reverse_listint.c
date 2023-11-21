#include "lists.h"

/**
 * reverse_listint - Write a function that reverses a listint_t.
 * @head: a pointer to a singly linked list node structure.
 * Return: return the pointer to the first node .
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
