#include "lists.h"
#include <stdlib.h>
/**
 * free_listi2 - will set null to all addresses in the list
 * @head:address of first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_add;

	if (head == NULL)
		return;
	while (*head)
	{
		temp_add = (*head)->next;
		free(head);
		*head = temp_add;
	}
	head = NULL;
}
