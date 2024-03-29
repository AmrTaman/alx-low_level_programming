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
	shash_node_t *node = ht->array[hash], *nodes = ht->shead;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
		while (nodes)
		{
			if (strcmp(node->key, nodes->key) == 0)
				return (0);
			else if (strcmp(node->key, nodes->key) <= -1 && ((nodes->snext != NULL &&
				nodes->sprev != NULL) || (nodes->snext == NULL && nodes->sprev != NULL)))
			{
				node->snext = nodes;
				node->sprev = nodes->sprev;
				nodes->sprev->snext = node;
				nodes->sprev = node;
				return (1);
			}
			else if (strcmp(node->key, nodes->key) <= -1 && ((nodes->sprev == NULL &&
				nodes->next == NULL) ||
				(nodes->sprev == NULL && nodes->next != NULL)))
			{
				node->snext = nodes;
				node->sprev = NULL;
				nodes->sprev = node;
				ht->shead = node;
				return (1);
			}
			else if (strcmp(node->key, nodes->key) == 1 && nodes->snext == NULL)
			{
				node->snext = NULL;
				node->sprev = nodes;
				nodes->snext = node;
				ht->stail = node;
				return (1);
			}
			nodes = nodes->snext;
		}
	return (0);
}

/**
 * create_node - creating a node
 * @key: key
 * @value: value
 *
 * Return: pointer
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(sizeof(strlen(key) + 1));
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = malloc(sizeof(strlen(value) + 1));
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
	return (node);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: a pointer to the sorted hash table array.
 * @key: the key, a string that cannot be empty.
 *
 * Return: the value associated with the key, or NULL if key can't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % (ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
