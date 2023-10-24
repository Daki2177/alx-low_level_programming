#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - .....
 * @h: ...
 * Return: ...
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		++counter;
		h = h->next;
	}

	return (counter);
}
