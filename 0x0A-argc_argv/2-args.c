#include <stdio.h>

/**
  * main - Entry point of program
  * @argc: Counts the arguments
  * @argv: Gives the values of the arguments
  *
  * Return: Print all arguments
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
