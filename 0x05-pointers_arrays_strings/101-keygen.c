#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - generates a random valid password
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		_putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
	}

	return (0);
}
