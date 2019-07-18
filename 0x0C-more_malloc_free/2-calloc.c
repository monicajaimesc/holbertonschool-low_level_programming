#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory for an array
*@nmemb : is n
*@size : char that it is a an int
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int sizetotal;
/*nmemb is n * size (formula)*/
	sizetotal = nmemb * size;

/*generales conditionales given*/
	if (nmemb == 0 || size == 0)
		return (NULL);
/*call malloc*/
	p = (char *)malloc(sizetotal);
/*populate size*/
/*nmemb will be filled the 98 big box each one divide in * char*/
	for (i = 0; i < sizetotal; i++)
	{
		p[i] = 0;
		i++;
	}

return (p);
}
