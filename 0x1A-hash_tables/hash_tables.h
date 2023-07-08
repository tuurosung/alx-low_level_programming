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
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);



/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
        char *key;
        char *value;
        struct shash_node_s *next;
        struct shash_node_s *sprev;
        struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
        unsigned long int size;
        shash_node_t **array;
        shash_node_t *shead;
        shash_node_t *stail;
} shash_table_t;

#endif