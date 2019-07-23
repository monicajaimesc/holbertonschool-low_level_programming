#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	unsigned int count = 0;

	while (s[count] != '\0')
		count++;
	{
		return (count);
	}
}

/**
 * new_dog - function that creates a new dog
 *@name : dog's name structure
 *@age : dog's age
 *@owner : dog's owner
 * Return: ponter
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int l_name, l_owner, i;
	char *n_name, *n_owner;

	l_name = _strlen(name);
	l_owner = _strlen(owner);

	p = malloc(sizeof(dog_t)); /* reserve memory pointer*/
	if (p == NULL) /* verify space given */
		return (NULL);

	n_name = malloc(sizeof(char) * (l_name + 1));
/* reserve memory pointer name */
	if (n_name == NULL)
	{
		free(n_name);
		free(p);
		return (NULL);
	}
	n_owner = malloc(sizeof(char) * (l_owner + 1));
 /* reserve memory pointer owner */
	if (n_owner == NULL)
	{
		free(n_name);
		free(n_owner);
		free(p);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n_name[i] = name[i];
	n_name[i] = '\0';
	p->name = n_name;
	p->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		n_owner[i] = owner[i];
	n_owner[i] = '\0';
	p->owner = n_owner;
	return (p);
}
