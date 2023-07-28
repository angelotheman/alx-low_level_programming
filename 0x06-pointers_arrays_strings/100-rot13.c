#include "main.h"

/**
  * rot13 - Encodes a string in rot13
  * @str: String to be encoded
  *
  * Return: Char of encoded string
  */

char *rot13(char *str)
{
	int a = 0;
	int b = 0;

	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[a] != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == original[b])
			{
				str[a] == rot[b];
				break;
			}
		}
		a++;
	}
	return (str);
}
