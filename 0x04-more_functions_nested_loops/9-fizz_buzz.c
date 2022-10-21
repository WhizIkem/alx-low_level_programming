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
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		
			printf("FizzBuzz ");
		
		else if (n % 3 == 0)
		
			printf("Fizz ");
		
		else if (n % 5 == 0)
		
			printf("Buzz ");
		
		else
		
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
