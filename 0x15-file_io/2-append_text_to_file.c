#include "main.h"

/**
  * append_text_to_file - Append a text to the file
  * @filename: File name of the file
  * @text_content: Text to append to the file
  *
  * Return: -1 if filename if NULL, otherwise
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, len);

		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
