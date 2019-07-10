#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square
 * @a : pointer
 * @size : square
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	int p = 0;

	while (i < size)
	{

		sum1 += a[p];
		p += size + 1;
	i++;
	}
	i = 0;
	p = size - 1;
	while (i < size)
	{

		sum2 += a[p];
		p += size - 1;
	i++;
	}
	printf("%d, %d\n", sum1, sum2);

}
