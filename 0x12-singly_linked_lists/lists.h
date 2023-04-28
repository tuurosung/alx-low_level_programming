#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - a singly linked list structure
 *
 * @str: a given string
 * @len: length of the given string
 * @next: the node in the link
 *
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif