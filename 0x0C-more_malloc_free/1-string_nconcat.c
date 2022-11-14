#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings up to n bytes
 * @s1: soucre string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1count, s2count, newscount, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	s2count > n ? (s2count = n) : (n = s2count);
	newscount = s1count + s2count + 1;

	ptr = malloc(newscount * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < newscount - 1; i++)
		i < s1count ? (ptr[i] = s1[i]) : (ptr[i] = s2[i - s1count]);
	ptr[newscount] = '\0';
	return (ptr);
}
