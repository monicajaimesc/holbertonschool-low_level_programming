#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 *@head: list head
 *@index: index of the node, starting at 0
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index) /*if i is equal to index*/
		{
			temp = head;/*save it in temp that is equal to head*/
		}
		i++;/*i is the index iteration*/
		head = head->next;/* nodes deferencing*/
	}
return (temp);
}
