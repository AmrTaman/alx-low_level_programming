#include"hash_tables.h"
#include<stdlib.h>
/**
 * hash_table_create - creating a hasth table
 * @size: number of indexes
 *
 * Return: hash_table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t));
	return (table);
}
