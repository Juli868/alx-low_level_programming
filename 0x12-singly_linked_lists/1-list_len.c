#include "lists.h"
/**
 * list_len - determines the length of the list
 * @h: address of the first node
 * Return: number of found nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	if (h == NULL)
		return (-1);
	for (counter = 1; h->next != NULL; counter++)
			h = h->next;
	return (counter);
}
