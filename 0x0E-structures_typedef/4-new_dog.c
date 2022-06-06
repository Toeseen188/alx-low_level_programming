#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new a dog
 * @name: dog´s name
 * @age: dog´s age
 * @owner: dog owner
 * Return: struct dog if faill NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;
	int i, namelen, ownerlen;

	pdog = malloc(sizeof(*pdog));
	if (pdog == NULL || !(name) || !(owner))
	{
	free(pdog);
	return (NULL);
	}
	for (namelen = 0; name[namelen]; namelen++)
	;

	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
	;

	pdog->name = malloc(namelen + 1);
	pdog->owner = malloc(ownerlen + 1);

	if (!(pdog->name) || !(pdog->owner))
	{
	free(pdog->owner);
	free(pdog->name);
	free(pdog);
	return (NULL);
	}
	for (i = 0; i < namelen; i++)
	pdog->name[i] = name[i];
	pdog->name[i] = 0;

	pdog->age = age;

	for (i = 0; i < ownerlen; i++)
	pdog->owner[i] = owner[i];
	pdog->owner[i] = 0;
	return (pdog);
}
