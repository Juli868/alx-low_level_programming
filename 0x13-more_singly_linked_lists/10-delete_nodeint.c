#include "lists.h"
/**
 * delete_nodeint_at_index - will remove a cretain node
 * @head: first node
 * @index: index to consider
 * Return:1 i succeeded or else 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *temp;

	counter = 0;
	while (*head)
	{
		if (counter == index)
		{
			temp = (*head)->next;
			free(*head);
			(*head) = temp;
			return (1);
		}
		(*head) = (*head)->next;
		counter++;
	}
	return (0);
}
