#include "lists.h"
#include <stdio.h>
#include <string.h>

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
