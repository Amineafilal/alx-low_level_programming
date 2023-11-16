#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node at the end.
 * @head: a pointer to a singly linked list node structure.
 * @str: input value
 * Return: the number of head.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptrh;
	list_t *tail;
	char *ptrstr;
	int count_str = 0;

	ptrh = malloc(sizeof(list_t));
	if (ptrh == NULL)
	{
		return (NULL);
	}
	ptrstr = strdup(str);
	if (ptrstr == NULL)
	{
		free(ptrh);
		return (NULL);
	}
	while (str[count_str])
	{
		count_str++;
	}
	ptrh->str = ptrstr;
	ptrh->len = count_str;
	ptrh->next = NULL;
	if (*head == NULL)
	{
		*head = ptrh;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = ptrh;
	}
	return (*head);
}
