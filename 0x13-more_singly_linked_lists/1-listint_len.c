#include "lists.h"
#include <stdio.h>
/**
 * listint_len- shows number in a list
 * @h: the fist node of list
 *Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	int counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
