#include "lists.h"
/**
 * add_nodeint - Write a function that adds a new node at the beginning.
 * @head: a pointer to a singly linked list node structure.
 * @n: input value.
 * Return: return the number of nodes.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptrhint;

	ptrhint = malloc(sizeof(listint_t));
	if (ptrhint == NULL)
	{
		return (NULL);
	}
	ptrhint->n = n;
	ptrhint->next = *head;
	*head = ptrhint;
	return (ptrhint);
}
