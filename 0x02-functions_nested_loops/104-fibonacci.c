#include <stdio.h>

/**
  * main - Prints out fibonacci sequence
  *
  * Return: 0 - I am a shark boy
  */

int main(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int b = 2;


	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = a; i <= 98; i++)
	{
		unsigned long int temp = a + b;

		printf("%lu", temp);

		if (i < 98)
			printf(", ");
		a = b;
		b = temp;
	}
	printf("\n");

	return (0);
}
