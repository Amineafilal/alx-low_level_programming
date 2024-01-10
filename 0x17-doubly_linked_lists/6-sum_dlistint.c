#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data.
 * @head: pointer to pointer to head of list
 * Return: return value of sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
