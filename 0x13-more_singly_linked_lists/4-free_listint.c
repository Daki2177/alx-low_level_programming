#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - ....
 * @head: ...
 * Return: ...
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}
