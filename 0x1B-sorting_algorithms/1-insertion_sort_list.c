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
        







