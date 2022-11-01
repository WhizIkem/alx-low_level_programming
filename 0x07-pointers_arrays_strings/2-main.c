#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "Hello";
	char *f;

	f = _strchr(s, '1');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
