#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a lists
 * @head: double pointer head
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int size;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{

		temp = *head; /*temp variable save *head*/
		size = (*head)->n;/*size is equal to deferencing of head to n*/
		*head = (*head)->next;/*now head is oficcially the next one*/
		free(temp);
	}
return (size);
}
