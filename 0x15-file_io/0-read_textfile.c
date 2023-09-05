#include "main.h"
#include <stddef.h>

/**
  * read_textfile - Function to read text in a file
  * @filename: Name of file to read
  * @letters: Characters to be read
  *
  * Return: 0 if filename if NULL, otherwise
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read = 0, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[num_read] = '\0';

	num_written = write(STDOUT_FILENO, buffer, num_read);

	free(buffer);
	close(fd);

	if (num_written == -1 || num_read != num_written)
		return (0);

	return (num_read);
}
