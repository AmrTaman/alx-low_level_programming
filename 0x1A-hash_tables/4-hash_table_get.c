#include"hash_tables.h"
/**
 * hash_table_get - gets values of keys
 * @ht: hash table pointer
 * @key: the key to search for
 *
 * Return: NULL or the value
 */ 
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node;

	if (ht == NULL || !(strcmp(key, "")))
		return (NULL);
	hash = key_index((const unsigned char *)key, ht->size);
	node = ht->array[hash];
	if (hash >= ht->size)
		return (NULL);
	while(node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
