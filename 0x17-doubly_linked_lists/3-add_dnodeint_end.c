#include "lists.h"
/**
 * add_dnodeint - adds a new node to the end of the list
 * @head: first node
 * @n: number to add
 * Return: address of the new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (*head)
		{
			if ((*head)->next == NULL)
			{
				(*head)->next = new;
				new->prev = *head;
			}
			else
				(*head) = (*head)->next;
		}
	}
	return (new);
}
