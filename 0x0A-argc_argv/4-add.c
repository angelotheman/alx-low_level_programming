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
	int a;
	int b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
