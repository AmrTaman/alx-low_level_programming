#include"hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			if (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
