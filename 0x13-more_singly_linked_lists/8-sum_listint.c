#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - function that returns the sum of all the data
 *@head: list head
 *
 *Return: sum of all the data
 */

int sum_listint(listint_t *head)
{

	int sum = 0;


	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n; /*sum of the two members of the node*/
		head = head->next;/*deferencing*/
	}

return (sum);
}
