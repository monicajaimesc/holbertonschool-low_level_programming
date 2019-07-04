/**
 * _strncpy - copies a string
 *@dest : destino pointer variable
 *@src : source
 *@n : num of characters
 * Return: 0
 */
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
