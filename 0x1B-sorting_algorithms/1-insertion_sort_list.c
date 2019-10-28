#include "sort.h"
/**
 *insertion_sort_list - sorts a doubly linked list of integers in ascending order using the Insertion sort 
 *@list: list to be sort
 *Return: nothing is a void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *actual_node, *next_node;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	actual_node = *list;
	while (actual_node != NULL)
	{
		next_node = actual_node->next;
        
		while (actual_node->prev != NULL && actual_node->prev->n > actual_node->n)
		{
			actual_node->prev->next = actual_node->next;
			if (actual_node->next != NULL)
            {
				actual_node->next->prev = actual_node->prev;
            }
            /* modify connections of the linked list */
			actual_node->next = actual_node->prev;
			actual_node->prev = actual_node->next->prev;
			actual_node->next->prev = actual_node;
			if (actual_node->prev == NULL)
            {
				*list = actual_node;
            }
			else
				actual_node->prev->next = actual_node;
			print_list(*list);
		}
		actual_node = next_node;
    }
}






