#include "lists.h"
#include <stdlib.h>
/**
 * free_listi2 - will set the head to null and the address of the next node to null
 * @head:address of first node
 */
 void free_listint2(listint_t **head)
{
	while (*head)
		free(head->next);
	*head = NULL;
}
