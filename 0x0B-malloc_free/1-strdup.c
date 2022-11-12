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
	int i, nstr;

	if (str == NULL)
		return (NULL);

	for (nstr = 0; nstr <= *str; nstr++)
	{
	}
	nstr += 1;

	array = malloc(sizeof(char) * (nstr + 1));

	for (i = 0; i < nstr; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
