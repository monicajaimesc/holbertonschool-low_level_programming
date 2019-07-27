#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: string to be printed between strings
 * @n: The number of strings passed to the function
 *
 * Return: Nothing
 * On error, nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arraylist;
	unsigned int i = 0;
	char *s;

	va_start(arraylist, n);/*Initialize arglist-char*/
	for (i = 0; i < n; i++)
	{
		s = va_arg(arraylist, char*);
		if (s != NULL)
			printf("%s", s);

		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(arraylist);

}
