#include "lists.h"
/**
 * free_dlistint - function that free a list
 *@head: head pointer
 *
 *Return: no return, is a void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);

	}
}
