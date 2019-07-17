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
	unsigned int count = 0;

	while (s[count] != '\0')
		count++;
	{
		return (count);
	}
}

/**
 * str_concat - concatenates two strings
 *@s1 : destint pointer variable
 *@s2 : string to append
 *
 * Return: dest
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int size;
	char *ss;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");

	size = (_strlen(s1) + _strlen(s2));
	ss = (char *) malloc(size + 1);
		if (ss == NULL)
			return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ss[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		ss[i] = s2[j];

		i++;
	}
	ss[i] = '\0';

return (ss);
}
