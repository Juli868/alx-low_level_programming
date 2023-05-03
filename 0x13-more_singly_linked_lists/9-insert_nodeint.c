#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: aaddress of first node
 * @idx: index of new node
 * @n: number to insert
 * Return: address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp_add;
	unsigned int counter;

	counter = 0;
	new = malloc(sizeof(listint_t));
	new->n = n;
	while (*head)
	{
		if (idx == counter)
		{
			temp_add = (*head)->next;
			(*head)->next = new;
			new->next = temp_add;
			return (new);
		}
		*head = (*head)->next;
	}
	temp_add = NULL;
	free(new);
	return (NULL);
}
