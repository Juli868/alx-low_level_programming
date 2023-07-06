#include "lists.h"
/**
 * pop_listint - will delete first node
 * @head: pointer to the first node
 * Return: the n element of the new first node
 */
int pop_listint(listint_t **head)
{
	int prev;
	listint_t *tmp;

	tmp = *head ;
	if (tmp == NULL)
		return (0);
	prev = tmp->n;
	tmp = tmp->next;
	free(*head);
	head = NULL;
	*head = tmp;
	return (prev);
	free(tmp);
}
