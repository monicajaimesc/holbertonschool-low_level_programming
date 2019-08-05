#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 *@head: pointer to pointer to head
 *@n: size
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);

	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

return (*head);
}
