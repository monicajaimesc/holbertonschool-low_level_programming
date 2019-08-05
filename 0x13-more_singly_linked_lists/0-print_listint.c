#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *@h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h != NULL)
			printf("%d\n", h->n);
		counter++;
		h = h->next; /*current = current -> next*/
	}
	return (counter);
}
