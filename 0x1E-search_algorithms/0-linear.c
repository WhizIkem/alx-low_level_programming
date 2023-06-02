#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of element in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL) 
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;  /*Found the value at index i*/
		}
	}

	return -1;  /*Value not found in the array*/
}
