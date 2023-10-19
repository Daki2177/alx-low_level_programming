#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Number of elements of a list
 * @h: Linked list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);

}
