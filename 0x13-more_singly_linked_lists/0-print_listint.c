#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints all nodes in the developed list
 * @h: memory location pf the first node
 *Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	int counter;

	counter = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
