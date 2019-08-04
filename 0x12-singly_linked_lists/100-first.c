#include <stdio.h>

/**
 * premainexecution - ejecute the function before the main
 *
 *
 */

void __attribute__ ((constructor)) premainexecution()
{
	printf("You're beat! and yet, you must allow,\n%s",
"I bore my house upon my back!\n");
}
