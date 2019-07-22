#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - write a function that initialize a variable
 * @d : new variable for dog struct
 * @name : dog's name
 * @age : dog's age
 * @owner : dog's owneri
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* verify space given */
		return;
	d->name = name; /* to acces the first member of the struct */
	d->age = age;
	d->owner = owner;

}
