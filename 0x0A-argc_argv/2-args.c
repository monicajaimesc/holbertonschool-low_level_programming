#include "holberton.h"
#include <stdio.h>

/**
 *main - prints the number of arguments
 *
 *@argc: argument count
 *@argv: argument value vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc,
	__attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}

return (0);
}

