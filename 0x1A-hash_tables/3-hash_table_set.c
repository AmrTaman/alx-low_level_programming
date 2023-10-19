#include"hash_tables.h"
/**
 * hash_table_set - inserts a node
 * @ht: hashtable pointer
 * @key: the key of the node
 * @value: the value of the key
 *
 *Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int hash;
    hash_node_t *node = NULL, *head = NULL;

    if (ht == NULL || key == NULL || !(strcmp(key, "")) || value == NULL)
        return (0);
    hash = key_index((const unsigned char *)key, ht->size);
        printf("%lu\n", hash);
    fflush(stdout);
    if (ht->array[hash] == NULL)
    {
        if (hash >= ht->size)
            return (0);
        node = malloc(sizeof(hash_node_t *));
        if (node == NULL)
            return (0);
        strcpy(node->key, key);
        strcpy(node->value, value);
        node->next = NULL;
        return (1);
    }
    else if (strcmp(ht->array[hash]->key, key) == 0)
    {
        strcpy(ht->array[hash]->value, value);
        return (1);
    }
    else
    {
        head = ht->array[hash]; 
        node = malloc(sizeof(hash_node_t *));
        if (node == NULL)
            return (0);
        strcpy(node->key, key);
        strcpy(node->value, value);
        node->next = head;
        ht->array[hash] = node;
        return (1);
    }
    return (0); 
}
