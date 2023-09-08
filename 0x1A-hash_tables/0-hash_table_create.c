#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size <= 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	new->size = size;
	return (new);
}
