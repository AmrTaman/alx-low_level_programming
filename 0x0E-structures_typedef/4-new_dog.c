#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - defining a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return NULL;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return ptr;
}
