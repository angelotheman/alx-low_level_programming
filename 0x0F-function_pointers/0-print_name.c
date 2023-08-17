#include "function_pointers.h"

/**
  * print_name - Printing my name
  * @name: First argument
  * @f: Inner function
  *
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
