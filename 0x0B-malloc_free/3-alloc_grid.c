#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D array of int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	i = j = 0;
	if (height < 1)
		return (NULL);
	array = (int **)malloc(height * sizeof(array));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free (array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
