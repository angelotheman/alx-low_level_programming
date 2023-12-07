#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key to look for
 *
 * Return: The value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	curr = ht->array[index];
	while (curr && strcmp(curr->key, key) == 0)
		curr = curr->next;

	return ((curr == NULL) ? NULL : curr->value)
}
