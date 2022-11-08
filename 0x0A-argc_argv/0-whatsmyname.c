#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count (total number of arguments/parameters
 * @argv: argument vector (array of character pointer)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argc = 0; /* added to pass betty */

	printf("%s\n", argv[argc]);
	return (0);
}
