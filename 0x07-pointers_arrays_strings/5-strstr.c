#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - first occurrence of the substring
 * @haystack : string
 * @needle : substring
 *
 * Return: substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *match = 0;
	char **p;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			p = &haystack;
			for (i = 0; *(needle + i) != '\0'; i++)
			{
				if (*(needle + i) != *(haystack + i))
				{
					break;
				}
				if (*(needle + i + 1) == 0)
				{
					return (*p);
				}
			}
		}
		haystack++;
	}
return (match);
}
