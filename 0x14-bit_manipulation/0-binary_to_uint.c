#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int j = 1;
	unsigned int len;
	int c;

	len = strlen(b);

	if (b == NULL)
		return (0);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		if (b[c] == '1')
		{
			i += j;
		}
		j *= 2;
	}

	return (i);
}
