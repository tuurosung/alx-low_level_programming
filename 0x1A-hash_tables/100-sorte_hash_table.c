#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Function to create a hash table.
 * @size: final size of the hash table
 *
 * Return: address of the hash table or NULL if otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int index;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
        return (NULL);
    for (index = 0; index < size; index++)
        ht->array[index] = NULL;
    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Function to add an element to a hash table.
 *
 * @ht: The address of the hashed table.
 * @key: Key of the element to be added
 * @value: Associated value to be added
 *
 * Return: 1 or 0 if otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *holder;
    char *copy_val;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    copy_val = strdup(value);
    if (copy_val == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    holder = ht->shead;
    while (holder)
    {
        if (strcmp(holder->key, key) == 0)
        {
            free(holder->value);
            holder->value = copy_val;
            return (1);
        }
        holder = holder->snext;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
    {
        free(copy_val);
        return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(copy_val);
        free(new_node);
        return (0);
    }
    new_node->value = copy_val;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (ht->shead == NULL)
    {
        new_node->sprev = NULL;
        new_node->snext = NULL;
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else if (strcmp(ht->shead->key, key) > 0)
    {
        new_node->sprev = NULL;
        new_node->snext = ht->shead;
        ht->shead->sprev = new_node;
        ht->shead = new_node;
    }
    else
    {
        holder = ht->shead;
        while (holder->snext != NULL && strcmp(holder->snext->key, key) < 0)
            holder = holder->snext;
        new_node->sprev = holder;
        new_node->snext = holder->snext;
        if (holder->snext == NULL)
            ht->stail = new_node;
        else
            holder->snext->sprev = new_node;
        holder->snext = new_node;
    }

    return (1);
}

/**
 * shash_table_get - Get associated shash table value using key
 *
 * @ht: Address of the hash table
 * @key: Key for which to retrieve value
 *
 * Return: Value associated with key or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (NULL);

    node = ht->shead;
    while (node != NULL && strcmp(node->key, key) != 0)
        node = node->snext;

    return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Funciton for printing the hash table
 *
 * @ht: The address of the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->shead;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Reverse print a hash table
 *
 * @ht: Address of the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->stail;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Function to delete a hash table
 *
 * @ht: Address of the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_table_t *head = ht;
    shash_node_t *node, *holder;

    if (ht == NULL)
        return;

    node = ht->shead;
    while (node)
    {
        holder = node->snext;
        free(node->key);
        free(node->value);
        free(node);
        node = holder;
    }

    free(head->array);
    free(head);
}