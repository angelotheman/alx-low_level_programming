#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - Printing my name
  * @name: First argument
  * @f: Inner function
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
