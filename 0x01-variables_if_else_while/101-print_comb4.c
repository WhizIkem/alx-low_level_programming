#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int dg1, dg2, dg3;

	for (dg1 = 0; dg1 < 8; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 < 9; dg2++)
		{
			for (dg3 = dg2 + 1; dg3 < 10; dg3++)
			{
				putchar((dg1 % 10) + '0');
				putchar((dg2 % 10) + '0');
				putchar((dg3 % 10) + '0');
			if (dg1 == 7 && dg2 == 8 && dg3 == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
