#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * @...: elipsis
 * Return: nothing, void
 */
void print_all(const char *const format, ...)
{
	char *str;
	unsigned int i = 0;
	va_list all;

	va_start(all, format);
		while (format[i] == '\0')
		{
			printf("\n");
			return;
		}
		while (format[i] != '\0')
		{
			switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(all, int));
			break;
		case 'i':
			printf("%d", va_arg(all, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(all, double));
			break;
		case 's':
			str = va_arg(all, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
			format[i] == 'f') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
		}
		printf("\n");
		va_end(all);
}
