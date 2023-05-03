#include <stdlib.h>
#include "lists.h"
/**
 *pop_listsint - removes the  first node
 *@head: yhe first node's address
 *Return: the value of first node
 */
int pop_listint(listint_t **head)
{
	int value_n;
	listint_t * temp_add;

	if (*head == NULL)
		return (0);
	value_n = (*head)->n;
	temp_add = (*head)->next;
	free(head);
	*head = temp_add;
	return (value_n);
}
