#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * leng_string - get the leng of the string
 *@str: string
 *
 * Return: string leng
 */
int leng_string(char *str)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		len++;
	}

return (len);
}


/**
 * add_node - adds a new node at the beginning og a list_t list
 *@head: pointer to pointer
 *@str: string
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copystr;
	list_t *new;

	copystr = strdup(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

		new->str = copystr;
		new->len = leng_string(copystr);
		new->next = *head;
		*head = new;

return (new);
free(new);
}
