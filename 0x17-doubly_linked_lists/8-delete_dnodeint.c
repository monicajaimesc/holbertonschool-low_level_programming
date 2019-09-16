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
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: double pointer to the list
 * @index: position
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node;
	unsigned int count = 0;
	unsigned int length;

	if ((*head) == NULL)
		return (-1);
	delete_node = (*head);
	if ((*head)->next == NULL)
	{
		(*head) = NULL;
		return (1);
	}
	length = dlistint_len(delete_node);
	if (length < index)
		return (-1);
	if (count == index)
	{
		if (delete_node)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(delete_node);
			return (1);
		}
	}
	while (count < index)
	{
		if (delete_node->next)
			delete_node = delete_node->next;
		else
			return (-1);
		count++;
	}
	delete_node->prev->next = delete_node->next;
	if (delete_node->next) /* check if is not NULL */
		delete_node->next->prev = delete_node->prev;
	free(delete_node);
return (1);
}
