#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: number of times the character _ should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int sl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sl = 1; sl <= n; sl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
