#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - structure containing there 3 declaration
 * @name: variable member of type char
 * @age: variable member of type int
 * @owner: variable member of type char*
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
