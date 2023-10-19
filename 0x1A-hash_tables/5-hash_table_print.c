#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: hash table pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (count == 0)
				printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			else
			{
			printf(", '%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			}
			count++;
		}
	}
	printf("}\n");
}
