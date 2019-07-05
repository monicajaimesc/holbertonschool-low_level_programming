#include "holberton.h"

/**
 * leet - function that encodes string
 * @s : string
 *
 *
 * Return: dest
 */
char *leet(char *s)
{
	char a[5] = {'4', '3', '0', '7', '1'};
	char l[5][2] = {
		{'a', 'A'}, { 'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}
	};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (s[i] == l[j][0] || s[i] == l[j][1])
			{
				s[i] = a[j];
			}
		}
	}
return (s);
}

