#include "hash_tables.h"

/**
 * key_index - Function to give the index of a key
 * @key: The key argument
 * @size: Size of the array
 *
 * Return: Returns the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
