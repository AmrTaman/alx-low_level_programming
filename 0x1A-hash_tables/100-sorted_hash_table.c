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
	for (x = 0; x < ht->size; x++)
		ht->array[x] = NULL;
	return (ht);
}

/**
 * shash_table_set - sets the table
 * @ht: table
 * @key: key of the node
 * @value: value of the node
 *
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	unsigned long int hash;

	if (ht == NULL || key == NULL || value == NULL || (!strcmp(key, "")))
		return (0);
	hash = hash_djb2((const unsigned char *)key) % (ht->size);
	if (ht->array[hash] == NULL)
	{
		node = malloc(sizeof(shash_node_t));
		node->key = malloc(sizeof(strlen(key) + 1));
		node->value = malloc(sizeof(strlen(value) + 1));
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = NULL;
		node->sprev = NULL;
		node->snext = NULL;
		ht->array[hash] = node;
	}
	else if (strcmp(ht->array[hash]->key, key) == 0)
	{
		strcpy(ht->array[hash]->value, value);
	}
	else
	{
		node = malloc(sizeof(shash_node_t));
		node->key = malloc(sizeof(key) + 1);
		node->value = malloc(sizeof(value) + 1);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = ht->array[hash];
		node->sprev = NULL;
		node->snext = NULL;
		ht->array[hash] = node;
	}
	sort_list(ht, hash);
	return (1);
}

/**
 * shash_table_print - prints a table
 * @ht: table
 */
void shash_table_print(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node)
	{
		if (count == 0)
			printf("'%s': '%s'", node->key, node->value);
		else
		{
			printf(", '%s': '%s'", node->key, node->value);
		}
		count++;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a table
 * @ht: table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node)
	{
		if (count == 0)
			printf("'%s': '%s'", node->key, node->value);
		else
		{
			printf(", '%s': '%s'", node->key, node->value);
		}
		count++;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the table
 * @ht: table pointer
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x;
	shash_node_t *node, *temp;

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
