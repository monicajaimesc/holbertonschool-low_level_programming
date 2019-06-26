#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints number from n to 98
 *
 * @n:parameters
 * Return: nothing
 */

void print_to_98(int n)

{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
		putchar ('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
		putchar ('\n');
	}
	else
	{
		printf("98\n");
	}
}
