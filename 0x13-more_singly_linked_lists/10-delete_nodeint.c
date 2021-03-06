#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *@head: pointer head
 *@index: index of the node that should be deleted
 *
 * Return: 1 if it succeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *nodo;
	unsigned int counter = 0;

	if (*head == NULL) /*head value is null return -1*/
		return (-1);
	temp = *head;

	while (temp)
	{
		/*find previos node of node to be deleted*/
		if ((counter + 1) == index)
		{
			nodo = temp->next;/*nodowill save the value tempnext*/
			temp->next = (temp->next)->next;
			free(nodo);
			return (1);
		}
	else if (index == 0)
	{
		nodo = temp; /*to hold the first nodo saved*/
		*head = temp->next; /*change head*/
		free(nodo);/*free old head*/
		return (1);
	}



	temp = temp->next;
	counter++;
	}
return (-1);
}
