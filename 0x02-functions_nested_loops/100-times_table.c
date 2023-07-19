#include <stdio.h>
#include "main.h"

/**
  * print_times_table - Print time tables as specified
  * @n: The number of times the table would be printed
  * Returns: 0 (success)
  */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int sum = i * j;

				printf("%d", sum);

				if (j < n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}
