#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 *main - multiplies twho numbers
 *
 *@argc: argument count
 *@argv: argument value vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, j, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (isdigit(*(*(argv + i) + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(*(argv + i));
	}
	printf("%d\n", sum);
	return (sum);
}
