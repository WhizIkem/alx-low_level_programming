#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int sum = 0;
	int limit = 1024;

	for (i = 1; i < limit; i++)
	{
		if (1 % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
