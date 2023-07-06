#include "lists.h"
/**
 * print_listint- prints an integer in the list
 * @h: first node in the list
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	int counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
