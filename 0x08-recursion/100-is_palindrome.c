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

/**
  * str_length - Find the length of the string
  * @s: Args
  *
  * Return: Length of string (Int)
  */

int str_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_length(s + 1));
}

/**
  * is_palindrome_recursive - Checks if the palindrome is recursive
  * @s: Start string
  * @start: Forward pointer
  * @end: Backward pointer
  *
  * Return: 1 if palindrome, 0 otherwise
  */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (s[start] >= s[end])
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
