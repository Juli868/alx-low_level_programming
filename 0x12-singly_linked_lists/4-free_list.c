#include "lists.h"
/**
 * free_list- will clear the list
 * @head: first element
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
