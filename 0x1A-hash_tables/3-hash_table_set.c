#include "hash_tables.h"

/**
 * hash_table_set - adds / edit an element to the hash table
 * @ht: address of the hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *copy_value;
	unsigned long int index, i;

	/* check for null */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = copy_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
