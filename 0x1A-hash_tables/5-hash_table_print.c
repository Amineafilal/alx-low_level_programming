#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	unsigned int printed = 0;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			printed++;
		}
	}
	printf("}\n");
}
