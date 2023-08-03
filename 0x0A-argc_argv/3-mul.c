#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point of program
  * @argc: Counts the arguments
  * @argv: Gives the values of the arguments
  *
  * Return: 1 if not two arguments, 0 otherwise
  */

int main(int argc, char *argv[])
{
	int mult = 1;
	int i;

	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
}
