#include "lists.h"
/**
 * dlistint_len - function that returns number of elements in a list
 *@h: header pointer
 *Return: number of elments, counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

return (counter);
}

