#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list
 *@h: header pointer
 *
 * Return: number of elements in the linked list_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next; /*now the header is the nex value of the list*/
		counter++;
	}

return (counter);
}

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

new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		return (new);
	/*new will be equal to the first elemento, new first element now*/
	}
	while (temp)
	{
		if (counter + 1 == idx)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new); /*new is in the end*/
		}
		temp = temp->next;
		counter++;
	}

return (NULL); /*when index is mayor that nodes number*/
}
