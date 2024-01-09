#include "lists.h"
/**
 * *add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * @head: pointer to pointer to head of the list.
 * @n: input value
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;

	if (*head != NULL)
	{
		(*head)->next = new_node;
	}
	*head = new_node;
	return (new_node);
}
