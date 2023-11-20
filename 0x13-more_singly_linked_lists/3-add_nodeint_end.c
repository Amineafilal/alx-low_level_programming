#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the end.
 * @head: a pointer to a singly linked list node structure.
 * @n: input value.
 * Return: return the number of nodes.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptrhint;
	listint_t *tail = *head;

	ptrhint = malloc(sizeof(listint_t));
	if (tail != NULL)
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = ptrhint;
	}
	else
	{
		*head = ptrhint;
	}
	ptrhint->n = n;
	ptrhint->next = NULL;
	return (ptrhint);
}
