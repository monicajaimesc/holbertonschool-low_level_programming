#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the head
 *@idx: index of the list where the new node should be added
 *@n: new node value
 *Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	while (temp)
	{
		if (counter + 1 == idx)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			break;
		}
		temp = temp->next;
		counter++;
	}
return (*head);
}
