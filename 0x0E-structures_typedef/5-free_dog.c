#include "dog.h"
#include <stdlib.h>

/**
* free_dog - write a function that frees the dogs
* @d: data structure pointer
*
* Return: no return.
*
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
