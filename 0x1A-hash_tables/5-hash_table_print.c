#include"hash_tables.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * hash_table_print - prints hash table
 * @ht: hash table pointer
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long x = 0;
	int m = 0;

	if (ht != NULL)
	{
		printf("{");
		for (; x < ht->size; x++)
		{
			if (ht->array[x])
			{
				if (m == 0)
				{
					printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
					m++;
					continue;
				}
				printf(", '%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			}
		}
		printf("}\n");
	}
}
