#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - defining a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i = 0, x = 0;

	while (name[i])
	{
		i++;
	}
	while (owner[x])
	{
		x++;
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * i + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * x + 1);
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	for (; i >= 0; i--)
	{
		ptr->name[i] = name[i];
	}
	for (; x >= 0; x--)
		ptr->owner[x] = owner[x];
	ptr->age = age;
	return (ptr);
}
