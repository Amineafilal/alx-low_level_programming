#include "lists.h"
/**
 * dlistint_len - Write a function that returns the number
 * @h: pointer to the head of the list
 * Return: value of count
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
