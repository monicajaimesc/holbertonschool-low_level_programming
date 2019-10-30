#include "sort.h"
/**
 *insertion_sort_list - sorts a doubly linked list
 *in ascending order using the Insertion sort
 *@list: list to be sort
 *Return: nothing is a void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p, *first;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	p = *list;
	while (p != NULL)
	{
		/* go throught */
		first = p->next;
		/* compare mayor(99) > menor(71), sorting list */
		while (p->prev != NULL && p->prev->n > p->n)
		{
			/* display the list */
			p->prev->next = p->next;
			if (p->next != NULL)
				/* lo devuelvo */
				p->next->prev = p->prev;

			p->next = p->prev;
			p->prev = p->next->prev;
			p->next->prev = p;
			if (p->prev == NULL)
			{
				*list = p;
			}
			else
				p->prev->next = p;
			print_list(*list);
		}
		/* list ended where it started */
		p = first;
	}
}
