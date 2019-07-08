0-strcat.c
Write a function that concatenates two strings.
Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest
char *_strcat(char *dest, char *src)
{
	int i, j;


	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' ; j++)
	{


		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
1-strncat.c
Write a function that concatenates two strings.
Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
		dest[i] = src[j];
		i++;
		}
		if (j == n)
		{
		break;
		}
	}
	dest[i] = '\0';
	return (dest);
}
2-strncpy.c
Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j == n)
		{
		break;
		}
		dest[j] = src[j];

	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

return (dest);
}
3-strcmp.c
Write a function that compares two strings.
Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
4-rev_array.c
Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array
void reverse_array(int *a, int n)
{
	int j;
	int temp, k;


	k = n / 2;
	for  (j = 0 ; j < k; j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
5-string_toupper.c
Write a function that changes all lowercase letters of a string to uppercase.
char *string_toupper(char *s)
{
	int i;
	int r;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			r = s[i] - 97;
			r = r + 65;
			s[i] = r;
		}
	}
return (s);
}
6-cap_string.c
Write a function that capitalizes all words of a string.
Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		if ((s[i] == 32) ||
				(s[i] == 9) ||
				(s[i] == 10) ||
				(s[i] == ',') ||
				(s[i] == ';') ||
				(s[i] == '.') ||
				(s[i] == '!') ||
				(s[i] == '?') ||
				(s[i] == '"') ||
				(s[i] == '(') ||
				(s[i] == ')') ||
				(s[i] == '{') ||
				(s[i] == '}'))
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
return (s);
}
7-leet.c
Write a function that encodes a string into 1337.

Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
You can only use one if in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation
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
8-rot13.c
Write a function that encodes a string using rot13.

Prototype: char *rot13(char *);
You can only use if statement once in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation
char *rot13(char *s)
{
	int i, j;

	char a[52] = {'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'A', 'B', 'C',
		'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z'};
	char o[52] = {'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{

			if (s[i] == a[j])
			{
				s[i] = o[j];
				break;
			}
		}
	}
return (s);
}
