#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all the parameters
 * @n: number of arguments
 * @...: variable list of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list num;


	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = sum = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
