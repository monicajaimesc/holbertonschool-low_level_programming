#include <stdlib.h>
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

new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;

new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	/*new will be equal to the first elemento, new first element now*/
	}
	temp = *head;
	while (temp)
	{
		if (counter + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new); /*new is in the end*/
		}
		temp = temp->next;
		counter++;
	}

return (NULL); /*when index is mayor that nodes number*/
}
