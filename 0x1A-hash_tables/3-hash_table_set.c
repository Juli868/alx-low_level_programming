#include "hash_tables.h"
/**
 * hash_table_set - adds element in the table
 * @key: key to use
 * @value: vaue to add
 * @ht: the pointer to the hash table
 * Return: 1 if passed else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	char *cpy_value, *cpy_key;

	index = key_index((const unsigned char*)key, ht->size);
	cpy_key = strdup(key);
	cpy_value = strdup(value);
	if (ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = cpy_key;
	new->value = cpy_value;
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	(ht->array[index])->next = new;
	if (ht->array[index] == NULL)
		return (0);
	return (1);
}
