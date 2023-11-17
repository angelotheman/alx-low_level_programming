#include "main.h"

/**
  * op_add - Sum function
  * @a: First arg
  * @b: Second arg
  *
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtraction function
  * @a: First number
  * @b: Second number
  *
  * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Product function
  * @a: First arg
  * @b: Second arg
  *
  * Return: Product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division function
  * @a: First arg
  * @b: Second arg
  *
  * Return: Divisor of a and b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
  * op_mod - Modulus function
  * @a: First arg
  * @b: Second arg
  *
  * Return: Reminder of a / b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
