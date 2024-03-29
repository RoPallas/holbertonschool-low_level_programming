#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: of the array of the hash table
 *
 * Return: the index at wich key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);
	return (hash_index % size);
}
