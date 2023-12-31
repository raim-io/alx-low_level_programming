#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: beginning node ofhe list_t list.
 * @str: string property of the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	/* define the new node (memory & properties) */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	/* check i there is no head and then set headas new */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* updating temp for the new lists to b added */
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

