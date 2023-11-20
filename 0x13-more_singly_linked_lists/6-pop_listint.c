#include "lists.h"

/**
 * pop_listint - Write a function that returns the nth node.
 * @head: a pointer to a singly linked list node structure.
 * Return: the number of nodes.
*/
int pop_listint(listint_t **head)
{
	listint_t *nodedelete;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	nodedelete = *head;
	data = nodedelete->n;
	free(nodedelete);
	*head = (*head)->next;
	return (data);
}
