#include "lists.h"
/**
 * insert_nodeint_at_index - will add a node at a specific index
 * @head: first node
 * @idx: index of the new node
 * @n: value of the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *tmp_hd;
	unsigned int counter;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp_hd = (*head);
	for (counter = 0; tmp_hd; counter++)
	{
		if (idx == counter)
		{
			tmp = tmp_hd;
			tmp_hd = new;
			new->next = tmp;
			return (new);
		}
		tmp_hd = tmp_hd->next;
	}
	tmp = NULL;
	tmp_hd = NULL;
	if (idx > counter)
		return (NULL);
	return (new);
	free(new);
	free(tmp_hd);
	free(tmp);
}
