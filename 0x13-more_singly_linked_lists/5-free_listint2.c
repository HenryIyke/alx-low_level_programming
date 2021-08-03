#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: First node
 *
 */

void free_listint2(listint_t **head);
{
	if (head->next)
		free_listint2(head->next);
	if (head)
		free(head);
	*head = NULL;
}
