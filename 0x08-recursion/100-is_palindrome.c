#include "main.h"

/**
  * is_palindrome - Checks for a palindrome
  * @s: String to check
  *
  * Return: 1 if palindrome, 0 otherwise
  */

int str_length(char *s);
int is_palindrome_recursive(char *s, int start, int end);

int is_palindrome(char *s)
{
	int length = str_length(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_recursive(s, 0, length - 1));
}

int str_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_length(s + 1));
}

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
