#include "holberton.h"

/**
* swap_int - swaps the values of two integers
*@a: variable a is a pointer
*@b: variable b is a pointer
*
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int inter;

	 inter = *a;

	*a = *b;

	*b = inter;

}
