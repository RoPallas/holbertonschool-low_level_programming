#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int size, i;
	int p = 0;

	if (ht == NULL)
		return;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (p)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			p = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
