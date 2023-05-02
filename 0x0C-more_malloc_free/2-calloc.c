#include<stdlib.h>
#include"main.h"
/**
 * _calloc - allocates memory
 * @nmemb: number of blocks
 * @size: size of each block
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	return (ptr);
}
