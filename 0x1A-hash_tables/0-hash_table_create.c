#include "hash_tables.h"


/**
 * hash_table_create - Function to create a hash table
 * @size: Size of the table
 *
 * Return: Pointer to created hash, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = calloc(table->size, sizeof(hash_node_t));

	if (!new_hash_table->array)
		return (NULL);

	return (new_hash_table);
}
