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
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
