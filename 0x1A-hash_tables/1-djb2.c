#include"hash_tables.h"
#include<stdlib.h>
/**
 * hash_djb2 - djb2 algorithm
 * @str: string
 *
 * Return: number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int x = 0;

	while (str[x])
	{
		hash = hash * 33 + str[x];
		x++;
	}
	return (hash);
}
