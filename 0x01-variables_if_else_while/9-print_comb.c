#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
   */
int main(void)
{
	int nu;

	for (nu = 0; nu <= 9; nu++)
	{
		putchar(nu % 10 + '0');
		if (nu != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
