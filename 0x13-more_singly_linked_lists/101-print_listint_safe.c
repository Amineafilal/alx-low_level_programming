#include "lists.h"

/**
 * print_listint_safe - Write a function that prints a listint_t linked list.
 * @head: a pointer to a singly linked list node structure.
 * Return: return the pointer to the first node.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *loop_node = NULL;
	size_t count = 0;

	if (head == NULL)
	{
		printf("NULL\n");
		exit(98);
	}
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current <= current->next)
		{
			loop_node = current->next;
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
