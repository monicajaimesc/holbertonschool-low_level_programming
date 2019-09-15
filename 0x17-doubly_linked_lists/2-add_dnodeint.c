#include "lists.h"
/**
 * add_dnodeint - add a new node begining list
 *@head: head pointer
 *@n: data
 *Return: addres new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
/* int* new = (new*)malloc(byte-size) */
	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n; /* fill the data */
	/* construction new node */
	new->prev = NULL; /* previous NULL */
	new->next = (*head); /* construction new node ended */
	if ((*head) != NULL) /* can´t be NULL the old node */
		(*head)->prev = new;
	(*head) = new;

return (new);
}
