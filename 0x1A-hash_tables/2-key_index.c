#include "hash_tables.h"
/**
 * key_index - return the index of the given index
 * @key: key to use
 * @size: size of the array to consider
 * Return: the generated index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int gen;

	if (key == NULL)
		EXIT_FAILURE;
	gen = hash_djb2(key) % size;
	return (gen);
}
