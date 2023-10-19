#include"hash_tables.h"
/**
 * key_index - makes an index
 * @key: the key of the node
 * @size: the size of the hashtable
 *
 *Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
