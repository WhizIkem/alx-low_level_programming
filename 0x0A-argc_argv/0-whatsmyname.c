#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count (total number of arguments/parameters
 * @argv: argument vector (array of character pointer)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argc--; /* added to pass betty */
	printf("Program's name is: %s\n", argv[0]);
	return (0);
}
