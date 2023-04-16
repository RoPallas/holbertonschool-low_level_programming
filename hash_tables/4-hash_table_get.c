#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;
	char *v;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (!(strcmp(current_node->key, key)))
		{
			v = strdup(current_node->value);
			if (!v)
				return (NULL);
			return (v);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
