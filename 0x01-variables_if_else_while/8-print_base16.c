#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
   */
int main(void)
{
	char cht;

	for (cht = 0; cht <= 9; cht++)
	{
		putchar(cht % 10 + '0');
	}
	for (cht = 'a'; cht <= 'f' ; cht++)
	{
		putchar(cht);
	}
	putchar('\n');
return (0);
}
