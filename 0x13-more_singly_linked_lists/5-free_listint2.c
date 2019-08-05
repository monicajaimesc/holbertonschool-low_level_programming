#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head; /*value of temp is equal to head poitner*/
		*head = (*head)->next;
		free(temp);
	}

}
