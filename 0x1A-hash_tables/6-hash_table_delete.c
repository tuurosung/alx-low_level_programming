#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: address of the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *holder;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				holder = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = holder;
			}
		}
	}

	free(head->array);
	free(head);
}
