#include "holberton.h"

/**
* reverse_array - function that reverses the content of an array of integers
*@a : array
*@n : array value
*/

void reverse_array(int *a, int n)
{
	int j;
	int temp, k;


	k = n / 2;
	for  (j = 0 ; j < k; j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
