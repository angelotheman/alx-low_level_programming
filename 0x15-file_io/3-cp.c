#include "main.h"

/**
  * init_buffer - Allocating bytes for buffer
  * @docs: Argument for the filename
  *
  * Return: A pointer to the newly allocated buffer
  */

char *init_buffer(char *docs)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", docs);
		exit(99);
	}

	return (buf);
}

/**
  * file_close - Closes the file
  * @file_dp: File descriptor
  */

void file_close(int file_dp)
{
	int a;

	a = close(file_dp);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_dp);
		exit(100);
	}
}

/**
  * main - Emulates the cp command
  * @argc: The number of arguments
  * @argv: An array of pointers to the arguments.
  *
  * Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	int from_file, to_file, to_read, to_write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = init_buffer(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	to_read = read(from_file, buf, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || to_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		to_write = write(to_file, buf, to_read);
		if (to_file == -1 || to_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		to_read = read(from_file, buf, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (to_read > 0);

	free(buf);
	file_close(from_file);
	file_close(to_file);

	return (0);
}
