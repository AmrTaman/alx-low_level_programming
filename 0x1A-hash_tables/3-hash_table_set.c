#include"hash_tables.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * c_item - creates a hash item
 * @key: key of the iteem
 * @values: value of the item
 *
 * Return: pointer of the item
 */
hash_node_t *c_item(const char *key, const char *values)
{
	char *k, *v;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	k = malloc(strlen(key) + 1);
	v = malloc(strlen(values) + 1);
	strcpy(k, key);
	strcpy(v, values);
	node->key = k;
	node->value = v;
	node->next = NULL;
	return (node);
}
/**
 * handle_collision - collision detector
 * @current: item pointer
 * @key: key
 * @value: value
 *
 * Return: 0 or 1
 */
int handle_collision(hash_node_t *current, const char *key, const char *value)
{
	hash_node_t *node;

	while (current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	if (current->next == NULL)
	{
		node = c_item(key, value);
		if (node == NULL)
			return (0);
		current->next = node;
	}
	return (1);
}
/**
 * hash_table_set - inserting an item
 * @ht: pointer of the hash table
 * @key: jey of the item
 * @value: value of the item
 *
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *node;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		node = c_item(key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
		return (1);
	}
	else if (strcmp(current_node->key, key) == 0 && ht->array[index])
	{
		current_node->value = strdup(value);
		return (1);
	}
	if (handle_collision(current_node, key, value))
		return (1);
	return (0);
}
