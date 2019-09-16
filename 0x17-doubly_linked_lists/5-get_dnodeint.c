#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 *@head: list head
 *@index: index of the node, starting at 0
 *Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

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
