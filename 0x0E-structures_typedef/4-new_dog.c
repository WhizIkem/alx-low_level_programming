#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: struct name
 * @age: struct age
 * @owner: struct owner
 * Return: returns pointer to buffer of data type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *newdog;

	namelen = ownerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(namelen *sizeof(newdog->name));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; i < namelen; i++)
		newdog->name[i] = name[i];

	newdog->age = age;

	newdog->owner = malloc(ownerlen *sizeof(newdog->owner));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; i < ownerlen; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
