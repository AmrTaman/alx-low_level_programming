#include"hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: hash table pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int count = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			if (node != NULL)
			{
				if (count == 0)
					printf("'%s': '%s'", node->key, node->value);
				else
				{
					printf(", '%s': '%s'", node->key, node->value);
				}
				count++;
			}
			node = node->next;
		}
	}
	printf("}\n");
}
