#include "lists.h"
/**
 * get_nodeint_at_index - will return node at a particular index
 * @head: first node
 * @index: index to find its node
 * Return: the address of the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
