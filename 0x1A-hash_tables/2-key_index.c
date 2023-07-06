#include "hash_tables.h"

/**
 * key_index - The location of key/val pair storage in the hash table
 * @key: The key
 * @size: The size of the array
 * Return: The index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
