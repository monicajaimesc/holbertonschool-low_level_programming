#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *@a:	pointer variable
 *@n: array value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n)
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d", a[i]);
		}

	}
	putchar('\n');
}
