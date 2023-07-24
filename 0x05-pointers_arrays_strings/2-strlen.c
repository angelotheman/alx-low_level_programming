#include <stdio.h>
#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: The string input
  *
  * Returns: Length of string (int)
  */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = *s; i <= '\0'; i++)
	{
		count++;
	}
	return (count);
}

int main(void)
{
	char a[] = "School";

	printf("The length is: %d\n", _strlen(&a));
	
	return (0);
}
