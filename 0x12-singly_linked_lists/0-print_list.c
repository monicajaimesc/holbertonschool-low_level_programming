#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{

	char *str;
	unsigned int len;
	size_t counter = 0;

while (h)
{
	str = h->str; /*first list position */
	len = h->len;	/* next list position */

	if (str == NULL)
		printf("[0] (nil)\n"); /* if the first element of the list is, printf*/

	else
	{
		printf("[%d] %s\n", len, str);
	}
	h = h->next; /*now the header is next position of the list*/
	counter++;
}

return (counter);
}
