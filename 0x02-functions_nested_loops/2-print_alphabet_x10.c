#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int lc, tt;

	for (tt = '0'; tt <= '9'; tt++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
