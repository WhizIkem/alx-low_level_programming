#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers from 0 to 14
 * Return: 0 to 14, 10 times followed by a new line
 */
void more_numbers(void)
{
	int i, row;

	for (row = 0; row <= 9; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
