#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * leng_string - get the leng of the string
 *@str: string
 *
 * Return: string leng
 */
int leng_string(const char *str)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		len++;
	}

return (len);
}

/**
 * add_node_end - adds a new node at the end of a list
 *@head: pointer to pointer to head
 *@str: string
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node_end;
	list_t *temp;

	temp = *head;

	new_node_end = malloc(sizeof(list_t));

	if (new_node_end == NULL)
		return (NULL);

		new_node_end->str = strdup(str);
		new_node_end->len = leng_string(str);
		new_node_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_node_end;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;

	}

	temp->next = new_node_end;

return (*head);
}
