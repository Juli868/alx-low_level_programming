#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a new node at a cretain index
 * @h: first node
 * @idx: index to check for
 * @n: value of the node
 *Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	while (*h)
	{
		if (counter == idx)
		{
			new->next = (*h);
			new->prev = (*h);
			temp = (*h)->next;
			temp->prev = new;
		}
		*h = (*h)->next;
	}
	return (new);
}
