#include"hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
 * sort_list - sorts a list
 * @ht: table pointer
 * @hash: hashing
 *
 * Return: 1 or 0
 */
int sort_list(shash_table_t *ht, unsigned long int hash)
{
	unsigned long int x = 0;
	int state;
	shash_node_t *node = ht->array[hash];
	shash_node_t *nodes = ht->shead;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		node->sprev = NULL;
		node->snext = NULL;
	}
	else
	{
		while (nodes)
		{
			state = strcmp(node->key, nodes->key);
			if (state == 0)
				return (0);
			else if (state == -1 && (nodes->snext != NULL && nodes->sprev != NULL || (nodes->snext == NULL && nodes->sprev != NULL)))
			{
				node->snext = nodes;
				node->sprev = nodes->sprev;
				nodes->sprev->snext = node;
				nodes->sprev = node;
				return (1);
			}
			else if(state == -1 && ((nodes->sprev == NULL && nodes->next == NULL) || (nodes->sprev == NULL && nodes->next != NULL)))
			{
				node->snext = nodes;
				node->sprev = NULL;
				nodes->sprev = node;
				ht->shead = node;
				return (1);                
			}
			else if (state == 1 && nodes->snext == NULL)
			{
				node->snext = NULL;
				node->sprev = nodes;
				nodes->snext = node;
				ht->stail = node;
				return (1);
			}
			nodes = nodes->snext;
		}
	}
	return (0);
}
