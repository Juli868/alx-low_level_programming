#include "lists.h"
/**
 * get_dnodeint_at_index - retrieves node at a given index
 * @head: first node
 * @index: index of element to find
 * Return: the found index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
			break;
		head = head->next;
	}
	if (index > counter)
		return (NULL);
	return (head);
}
