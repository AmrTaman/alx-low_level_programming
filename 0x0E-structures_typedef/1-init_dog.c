#include"dog.h"
#include<stdlib.h>
/**
 * init_dog - initializes a dog
 * @d: pointer
 * @name: pointer to name
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
