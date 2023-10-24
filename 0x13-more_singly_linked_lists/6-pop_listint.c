#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - ....
 * @head: ....
 * Return: ..
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int value = 0;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	*head = tmp_node->next;
	value = tmp_node->n;
	free(tmp_node);

	return (value);
}
