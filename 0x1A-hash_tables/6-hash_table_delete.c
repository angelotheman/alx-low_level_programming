#include "hash_tables.h"

/**
 * hash_table_delet - Deletes hash table
 * @ht: Pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_table_t *curr = *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				temp = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
