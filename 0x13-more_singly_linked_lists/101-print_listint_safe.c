#include "lists.h"

/**
 * print_listint_safe - Write a function that prints a listint_t linked list.
 * @head: a pointer to a singly linked list node structure.
 * Return: return the pointer to the first node .
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int compar;

	while (head != NULL)
	{
		compar = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (compar > 0)
		{
			head = head->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
