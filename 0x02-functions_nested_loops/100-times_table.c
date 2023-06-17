#include <stdio.h>
#include "main.h"

/**
 * A function that prints the n times table, starting with 0
 */

void print_times_table(int n) 
{
	if (n < 0 || n > 15) 
	{
        	return;
	}

	int i, j;
	for (int i = 0; i <= n; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}
