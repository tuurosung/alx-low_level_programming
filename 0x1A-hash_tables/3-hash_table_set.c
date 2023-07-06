#include "hash_tables.h"

/**
 * hash table_set - adds / edit an element to the hash table
 * @hash_tab: address of the hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *hash_tab, const char *key, const char *value)
{
    hash_node_t *new_node;
    char *copy_value;
    unsigned long int index, i;

    /* check for null */
    if (hash_tab == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);


    copy_value = strdup(value);
    if (copy_value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, hash_tab->size);
    for (i = index; hash_tab->array[i]; i++)
    {
        if (strcmp(hash_tab->array[i]->key, key) == 0)
        {
            free(hash_tab->array[i]->value);
            hash_tab->array[i]->value = copy_value;
            return (i);
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
    new_node->next = hash_tab->array[index];
    hash_tab->array[index] = new_node;

    return (1);
}