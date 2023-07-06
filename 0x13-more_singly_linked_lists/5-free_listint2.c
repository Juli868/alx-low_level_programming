#include "lists.h"
/**
 * free_listint2 - will free the memory that was occupied by the list
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_add;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp_add = (*head)->next;
		free(*head);
		*head = temp_add;
	}
	free(*head);
}
