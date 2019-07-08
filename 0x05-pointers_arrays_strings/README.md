0-reset_to_98.c
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
void reset_to_98(int *n)

{
	*n = 98;
}
1-swap.c
Write a function that swaps the values of two integers.
void swap_int(int *a, int *b)
{
	int inter;

	 inter = *a;

	*a = *b;

	*b = inter;

}
2-strlen.c
Write a function that returns the length of a string.
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	{
		return (count);
	}
}
3-puts.c
Write a function that prints a string, followed by a new line, to stdout.
void _puts(char *str)

{
	int printstr, count;

	count = _strlen(str);

	for (printstr = 0; printstr < count; printstr++)

	{
		_putchar(str[printstr]);
	}
	_putchar(10);
}

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')

	{
		count++;
	}
return (count);
}
4-print_rev.c
Write a function that prints a string, in reverse, followed by a new line.
void print_rev(char *s)
{
	int phrarev, count;

	count = _strlen(s) - 1;

	for (phrarev = count; phrarev >= 0; phrarev--)
	{
		_putchar(s[phrarev]);
	}
	_putchar('\n');
}

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')

	{
		count++;
	}
return (count);
}
5-rev_string.c
Write a function that reverses a string.
void rev_string(char *s)

{
	int count, c;
	char l;

	for (count = 0 ; s[count] != '\0'; count++)
	{
	}
	count--;
	for  (c = 0 ; c < count ; c++)
	{
		l = s[count];
		s[count] = s[c];
		s[c] = l;
		count--;
	}
}
6-puts2.c
Write a function that prints every other character of a string, starting with the first character, followed by a new line.
void puts2(char *str)
{
	int i;
	char l;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			l = str[i];
			_putchar(l);
		}
	}

	_putchar('\n');
}
7-puts_half.c
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
void puts_half(char *str)
{
	int i, m;
	char l;

	for (i = 0; str[i] != '\0'; i++)

	{
	}
	m = (i + 1) / 2;
	for (; str[m] != 0; m++)
	{
		l = str[m];
		_putchar(l);
	}
	_putchar('\n');
}
8-print_array.c
Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d", a[i]);
		}

	}
	putchar('\n');
}
9-strcpy.c
Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
