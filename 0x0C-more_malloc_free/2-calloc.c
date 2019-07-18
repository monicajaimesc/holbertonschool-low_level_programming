#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
*@nmemb : is n
*@size : char that it is a an int
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int sizetotal;
/*generales conditionales given*/
	if (nmemb == 0 || size == 0)
		return (NULL);
/*nmemb is n * size (formula)*/
	sizetotal = nmemb * size;

/*call malloc*/
	p = malloc(sizetotal);

	if (p == NULL)
		return (NULL);
/*populate size*/
/*nmemb will be filled the 98 big box each one divide in * char*/
	for (i = 0; i < sizetotal; i++)
	{
		p[i] = 0;
	}

return (p);
}
