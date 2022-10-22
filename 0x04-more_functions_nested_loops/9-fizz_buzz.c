#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number from  0 to 100
 * print fizz for multiples of three
 * print buzz for multiple of five
 * print fizzbuzz for multiples of both three and five
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
