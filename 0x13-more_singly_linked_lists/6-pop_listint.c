#include <stdlib.h>
#include <stdio.h>
#include "list.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: The head node
 *
 * Return: Head node data n, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *prev;
	int data;

	if (head && *head)
	{
		node = *head;
		data = node->n;
		*head = (*head)->next;
		free(node);
	}
	return (val);
}
