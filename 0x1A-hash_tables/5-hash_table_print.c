#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table
 * @ht: Pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	unsigned char flag = 0;


	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			curr = ht->array[i];

			while (curr != NULL)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
				if (curr != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}

	printf("}\n");
}
