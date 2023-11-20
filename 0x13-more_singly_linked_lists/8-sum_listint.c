#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of all the data.
 * @head: a pointer to a singly linked list node structure.
 * Return: return the sum of the all data.
*/
int sum_listint(listint_t *head)
{
	listint_t *ptrnode = head;
	int sum = 0;

	while (ptrnode != NULL)
	{
		sum += ptrnode->n;
		ptrnode = ptrnode->next;
	}
	return (sum);
}
