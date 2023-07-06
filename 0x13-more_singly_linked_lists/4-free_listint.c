#include "lists.h"
/**
 *free_listint - free the space that held the list
 *@head: first node
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
