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
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
		add_dnodeint(h,n);
	while (*h)
	{
		if (counter == idx)
		{
			temp = (*h)->next;
			new->next = temp;
			new->prev = (*h);
			if(temp != NULL)
				temp->prev = new;
			(*h)->next = new;
			return (new);
		}
		*h = (*h)->next;
		counter++;
	}
	return (NULL);
}
