#include "lists.h"
/**
 * dlistint_len - calculates number of nodes in a list
 * @h: first node
 * Return: number nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	for (nodes = 0; h; nodes++)
		h = h->next;
	return (nodes);
}
