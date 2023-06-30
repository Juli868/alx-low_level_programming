#include "lists.h"
/**
 * free_list- will clear the list
 * @head: first element
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head);
		temp = head->next;
		head = temp;
	}
	free(temp);
	free(head);
}
