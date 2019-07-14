#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies twho numbers
 *
 *@argc: argument count
 *@argv: argument value vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
