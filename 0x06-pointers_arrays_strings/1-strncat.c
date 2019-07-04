/**
 * _strncat - concatenates two strings
 *@dest : destino pointer variable
 *@src : string to append
 *@n : variable where it breaks
 * Return: dest
 */

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
