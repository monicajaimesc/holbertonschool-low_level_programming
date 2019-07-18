#include "holberton.h"
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
 * string_nconcat - concatenetes two strings
 *@n : bytes number
 *@s1 : first string to concatenate
 *@s2 : second string to concatenate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int size1;
	unsigned int size2;
	char *ss;
/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	size1 = (_strlen(s1));
	size2 = (_strlen(s2));

/* copy first string in the array */
	if (n >= size2)
	{
		n = size2;
	{
	ss = (char *) malloc(size1 + n + 1);
/*verification memory space */
		if (ss == NULL)
			return (NULL);
/*copy first string in the array */

	for (i = 0; s1[i] != '\0'; i++)
	{
		ss[i] = s1[i];
	}
/*copy second string in the array */
	for (j = 0; s2[j] != '\0'; j++)
	{
		ss[i] = s2[j];
		i++;
	}
	ss[i] = '\0';

return (ss);
}
