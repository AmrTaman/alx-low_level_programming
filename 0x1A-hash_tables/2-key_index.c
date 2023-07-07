#include"hash_tables.h"
#include<stdlib.h>
/**
 * key_index - get the index of the key
 * @key: string of the key
 * @size: size of the hash table
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
