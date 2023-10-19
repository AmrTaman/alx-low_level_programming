#include"hash_tables.h"
/**
 * hash_table_delete - deleting a table
 * @ht: hashtable pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
