#include <stdio.h>

/**
  * main - Print more Fibonacci sequence
  *
  * Return: 0 (I am a shark)
  */

int main(void)
{
	long int temp;
	long int sum = 0;
	long int num1 = 1;
	long int num2 = 2;

	do {
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;

		if (temp % 2 == 0)
			sum += temp;
	} while (temp <= 4000000);

	printf("%ld\n", sum);

	return (0);
}
