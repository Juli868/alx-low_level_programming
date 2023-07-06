#include "lists.h"
/**
 * listint_len - determines the length of the list
 * @h: first node
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
		h = h->next;
	return (counter);
}
