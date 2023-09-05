#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
  * create_file - Creates a file
  * @filename: Name of file
  * @text_content: Content to write to the file
  *
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, num_written, num_bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[num_bytes])
		num_bytes++;

	num_written = write(fd, text_content, num_bytes);
	close(fd);

	if (num_written == -1 || num_written != num_bytes)
		return (-1);

	return (1);
}
