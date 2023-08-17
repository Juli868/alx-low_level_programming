#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of the list
 * @head: first node
 * @n: number to add
 * Return: address of the new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	end = *head;
	while (end->next)
	{
		end = end->next;
	}
	end->next = new;
	new->prev = end;
	return (new);
}
