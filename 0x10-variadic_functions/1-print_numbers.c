#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints number, followed by new line
 * @n: number of int passed to the function
 * @separator: string to be printed betweeen space (,)
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(al, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(al, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(al);
}
