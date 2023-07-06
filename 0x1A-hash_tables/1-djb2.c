#include "hash_tables.h"

/**
 * hash_djb2 - A djb2 hash algorithm
 * @str: the hash string
 * Return: the hash calculation
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;
	return (hash);
}
