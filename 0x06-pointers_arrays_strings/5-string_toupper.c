/**
 * string_toupper - function that changes all lowercase
 *@s : variable char
 * Return: Always 0.
 */

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
