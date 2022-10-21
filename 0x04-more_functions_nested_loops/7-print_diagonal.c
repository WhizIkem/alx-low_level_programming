#include "main.h"

/**
 * print_diagonal - a function that draws diagonal line
 * @n: the number of \ to be printed
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int dg, nt;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dg = 0; dg < n; dg++)
		{
			for (nt = 0; nt < dg; nt++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
