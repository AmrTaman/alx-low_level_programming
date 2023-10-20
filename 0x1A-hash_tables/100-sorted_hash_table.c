#include"hash_tables.h"
/**
 * shash_table_create - creates a table
 * @size: size of the table
 *
 * Return: pointer of the hastable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x;

	shash_table_t *ht = malloc(sizeof(shash_table_t));
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	ht->shead = NULL;
	ht->stail = NULL;
	for (x= 0; x < ht->size; x++)
		ht->array[x] = NULL;
	return (ht);
}
