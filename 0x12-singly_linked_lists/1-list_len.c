#include "lists.h"
/**
 * list_len - will determine how long is the list
 * @h: first node
 * Return: the number of elements in there
 */
size_t list_len(const list_t *h)
{
	int counter;

	if (h == NULL)
		return (0);
	for (counter = 1; h->next != NULL; counter++)
		h = h->next;
	return (counter);
}
