#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: the string to copy
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	int i, newstring;

	if (str == NULL)
		return (NULL);

	for (newstring = 0; newstring <= *str; newstring++)
	{
	}
	newstring += 1;

	array = malloc(sizeof(char) * newstring);

	for (i = 0; i < newstring; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
