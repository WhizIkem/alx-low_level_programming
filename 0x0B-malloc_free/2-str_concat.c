#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to a new space in memory containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int s1count, s2count, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (s1count = 0; s1count <= *s1; s1count++)
	{
	}

	for (s2count = 0; s2count <= *s2; s2count++)
	{
	}

	array = malloc(sizeof(char) * (s1count + s2count + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
