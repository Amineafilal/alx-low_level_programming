#include "lists.h"

/**
 * add_node - Write a function that adds a new node at the beginning.
 * @head: a pointer to a singly linked list node structure.
 * @str: input value
 * Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrh;
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
	ptrh->next = *head;
	*head = ptrh;
	return (ptrh);
}
