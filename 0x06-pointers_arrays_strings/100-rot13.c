#include <stdio.h>
#include "main.h"

/**
  * rot13 - Encodes a string in rot13
  * @str: String to be encoded
  *
  * Return: Char of encoded string
  */

char *rot13(char *str)
{
	int a;
	int b;

	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == original[b])
			{
				str[a] == rot[b];
				break;
			}
		}
	}
	return (str);
}
