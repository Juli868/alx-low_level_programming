#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the first node and the next location to the next node.
 * @head: the address of the first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp_add;

	while (head)
	{
		temp_add = head->next;
		free(head);
		head = temp_add;
	}
}
