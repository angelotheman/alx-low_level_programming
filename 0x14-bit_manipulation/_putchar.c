#include <unistd.h>

/**
  * _putchar - Writes character c to stdout
  * @c: Args
  *
  * Return: On success 1
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
