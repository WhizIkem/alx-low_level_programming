#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum input
 * @max: maximum input
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);
	for (len = 0; len < (max - min); len++)
		;
	array = malloc(sizeof(int) * (len + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		array[i] = min++;
	}

	return (array);
}
