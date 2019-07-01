#include <stdio.h>
/**
* main - print two digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num, num2;

	for (num = 0 ; num <= 9 ; num++)
	{
		num2 = num + 1;
			while (num2 <= 9)
			{
				putchar (num + '0');
				putchar (num2 + '0');
			if ((num == 8) && (num2 == 9))
			{
				break;
			}
			else
			{
				putchar (',');
				putchar (' ');
			}
			num2++;
			}
	}
	putchar ('\n');
return (0);
}
