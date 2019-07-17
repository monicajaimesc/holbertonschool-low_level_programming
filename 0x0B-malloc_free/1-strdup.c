#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	{
		return (count);
	}
}


/**
 * _strdup - return a pointer to a newly space in memory
 *
 *@str: pointer that saved the first char's direction
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *ss;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	ss = (char *) malloc((size + 1) * sizeof(char));

	if (ss == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ss + i) = *(str + i);
	}
	*(ss + i) = '\0';

return (ss);
}
