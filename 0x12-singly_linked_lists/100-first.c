#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print sentence before main function
 */

void first(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n);
}
