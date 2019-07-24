#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name of the personi
 * @f: Pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
 /*pointer to function */
{
	if (!f) /* if the function exist do it */
		return;

	f(name); /*invoque the function that prints a name */
		/*execute it */
}
