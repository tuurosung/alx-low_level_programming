#include "hash_tables.h"


/**
 * hash_table_create - a function to create a table
 * @size: the size of the table
 * Return: a pointer to the new table or NULL if otherwise
*/

hash_table_t *hash_table_create(unsigned long size)
{
	hash_table_t *hash_tab;
	unsigned long int index;

	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);

	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_tab->array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		hash_tab->array[index] = NULL;

	return (hash_tab);

}
