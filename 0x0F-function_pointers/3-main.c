#include "3-calc.h"

/**
  * main - Main function to execute code
  * @argc: Number of arguments
  * @argv: Value of argument
  *
  * Return: 0 Success
  */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*ptr_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = argv[2];

	ptr_func = get_op_func(op);

	if (ptr_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr_func(a, b));

	return (0);
}
