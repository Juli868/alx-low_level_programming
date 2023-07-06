#include "lists.h"
/**
 *add_nodeint_end - adds a new node to the end of list
 *@head: the first node
 *@n: value of the node
 *Return: address of the new created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd, *tmp;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = NULL;
	tmp = *head;
	if (*head == NULL)
		*head = nd;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nd;
	}
	return (nd);
}
