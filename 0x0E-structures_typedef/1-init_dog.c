#include "dog.h"
/**
 * init_dog - intializes the struct
 * @d: the name with the type struct
 * @name: name param
 * @age: param float
 * @owner: param of data type char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
