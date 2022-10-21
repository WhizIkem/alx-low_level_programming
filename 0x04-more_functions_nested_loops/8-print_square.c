#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int wi, le;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (wi = 0; wi < size; wi++)
		{
			for (le = 0; le < size; le++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
