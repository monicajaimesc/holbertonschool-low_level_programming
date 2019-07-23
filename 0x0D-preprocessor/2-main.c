#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
/*__FILE__ standard predefined macro*/
/*this macro expands to the name of the current input file*/ 4/*in the form of a C string constant*/

