#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing, void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;

	va_start(numlist, n); /*Initialize argument list*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numlist, int));
		if (separator == NULL)
			continue;
		else if (i == (n - 1))
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");
	/*va_arg to get data connect to numlist*/
	va_end(numlist); /*clean up */

}
