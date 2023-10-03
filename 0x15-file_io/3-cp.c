#include "main.h"
#define BUFSIZE 1024


/**
  * error_exit - Prints an error message and exits the program
  * @message: The error message to print
  * @exit_code: The exit code
  */

void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
  * copy_file - Copies the content of one file to another
  * @from: The source file descriptor
  * @to: The destination file descriptor
  */

void copy_file(int from, int to)
{
	ssize_t n;
	char buf[BUFSIZE];
	ssize_t written;

	while ((n = read(from, buf, BUFSIZE)) > 0)
	{
		written = write(to, buf, n);

		if (written == -1)
			error_exit("Error: Can't write to destination", 99);
		else if (written != n)
			error_exit("Error: Write did not complete", 99);
	}

	if (n == -1)
	{
		error_exit("Error: Can't read from the source file", 98);
	}
}

/**
  * main - Copies the content of a file to another file
  * @argc: The number of arguments
  * @argv: An array of arguments
  *
  * Return: 0 on success, or error code on failure
  */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		error_exit("Error: Can't read from the source file", 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd_to == -1)
	{
		error_exit("Error: Can't write to the destination file", 99);
	}

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_exit("Error: Can't close file descriptor", 100);
	}

	return (0);
}
