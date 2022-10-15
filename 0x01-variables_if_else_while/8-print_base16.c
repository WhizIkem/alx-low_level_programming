#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char af;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (af = 'a'; af <= 'f'; af++)
		putchar(af);

	putchar('\n');

	return (0);
}
