#include <stdio.h>
#include "main.h"


int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	char *ptr;

	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);

	return (0);
}
