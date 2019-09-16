#include "lists.h"

/**
* dlistint_len - lenght of the list
* @h: head pointer
* Return: lenght
*/

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
return (counter);
}

/**
* insert_dnodeint_at_index - inserts a new node at given position
* @h: head pointer
* @idx: index of the list
* @n: data
* Return: new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int lenght;
	dlistint_t *temp = (*h);
	unsigned int counter = 0;
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	lenght = dlistint_len(temp);
	if (lenght < idx)
		return (NULL);
	if (counter == idx)
		return (add_dnodeint(h, n));
	while (counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next)
		new_node->next->prev = new_node;
	temp->next = new_node;
return (new_node);
}
