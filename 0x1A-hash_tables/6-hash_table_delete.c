#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @hash_tab: address of the hash table
*/

void hash_table_delete(hash_table_t *hash_tab)
{
	hash_table_t *head = hash_tab;
	hash_node_t *node, *holder;
	unsigned long int i;

	for (i = 0; i < hash_tab->size; i++)
	{
		if (hash_tab->array[i] != NULL)
		{
			node = hash_tab->array[i];
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
