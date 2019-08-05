#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning og a list_t list
 *@head: pointer to pointer
 *@n: size
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

		new->n = n; /* new point the size*/
		new->next = *head; /*then new point the next that will become head*/
		*head = new; /*head becomes new and can access to content*/

return (new);
}
