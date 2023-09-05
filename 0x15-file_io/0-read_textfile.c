#include "main.h"

/**
  * read_textfile - Function to read text in a file
  * @filename: Name of file to read
  * @letters: Characters to be read
  *
  * Return: 0 if filename if NULL, otherwise
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[letters + 1];
	ssize_t n;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	n = fread(buffer, sizeof(char), letters, file);

	if (n < 0)
		return (0);

	buffer[n] = '\0';
	n = write(STDOUT_FILENO, buffer, n);

	if (n < 0)
		return (0);

	fclose(file);

	return (n);
}
