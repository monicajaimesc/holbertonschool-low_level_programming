#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameters
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(num_list, n); /*n=number of elements*/
	for (i = 0; i < n; i++)
/*advance throught arglist*/
	sum += va_arg(num_list, int);
/*va_arg,macro to get data connected to the argumentlist*/
	va_end(num_list);
/*va_end sto using num_list, it's an argument poitner*/


return (sum);

}
