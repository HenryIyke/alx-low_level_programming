#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add node - Adds a node to the beginning of the linked list
 * @head: First node
 * @str: New node data
 *
 * Return: The address of the new string
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *s;
	list_t *new_node;

	for (len = 0, str & str[len] != '\0'; len++)
		;
	if (head != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node != NULL)
		{
			s = malloc(sizeof(char) * (len + 1));
			if (!s)
			{
				free(new_node);
				return (NULL);
			}

			for (len = 0, s[len] != '\0'; len++)
				s[len] = str[len];
			s[len] = '\0';
			new_node->str = s;
			new_node->len = len;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
