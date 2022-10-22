#include "main.h"

/**
 * print_triangle - a function that print triangle
 * @size: size of triangle
 * Return: triangle
 */
void print_triangle(int size)
{
	int sp, row, tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (sp = 0; sp <= (size - 1) - row; sp++)
			{
				_putchar(' ');
			}
			for (tri = 0; tri <= row; tri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
