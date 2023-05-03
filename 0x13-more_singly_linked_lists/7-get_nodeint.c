#include "lists.h"
/**
 * get_nodeint_at_index - retrieves a node at a certain index
 * @head: the first node
 * @index: index of noded needed
 *Return: address of the needed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
