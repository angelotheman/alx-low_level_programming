#include <stdio.h>

void print_string(void) __attribute__((constructor));

/**
  * print_string - Prints specific message
  *
  */

void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
