#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - will return the value of the list provided
 * @h: pionter to which the elements are
 * Return: the numbe of elements
 */
size_t list_len(const list_t *h)
{
	int number;

	number = 0;
	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
