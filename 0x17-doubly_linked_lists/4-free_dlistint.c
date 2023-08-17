#include "lists.h"
/**
 * free_dlistint - removes all nod form the list
 * @head: first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		/*free(head->prev);*/
		free(head);
		head = temp;
	}
}
