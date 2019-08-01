#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 *@h: pointer
 *
 * Return: number of elements in the linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next; /*now the header is the nex value of the list*/
		counter++;
	}

return (counter);
}

