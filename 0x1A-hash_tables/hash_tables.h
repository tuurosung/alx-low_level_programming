#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct hash_node_s - A given node of a hash table
 * @key: the key of the node
 * @value: the value of the node
 * @next: the next node
*/
typedef struct hash_node_s
{
        char *key;
        char *value;
        struct hash_node_s *next;
} hash_node_t;



/**
 * struct hast_table_s - A given table
 * @size: the size of the table array
 * @array: a given array of elements
*/

typedef struct hast_table_s
{
        unsigned long int size;
        hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif