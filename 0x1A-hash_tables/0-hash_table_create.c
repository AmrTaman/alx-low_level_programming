hash_table_t *hash_table_create(unsigned long int size){

	unsigned long int x = 0;
    hash_node_t* node;
    hash_table_t* table = malloc(sizeof(hash_table_t));

    if (table == NULL)
        return (NULL);
    table->size = size;
    node = calloc(table->size, sizeof(hash_node_t*));
    if (node == NULL){
        free (table);
        return (NULL);
    }
    for (x = 0; x < table->size; x++){
        table->array[x] = NULL;
    }
    
    return (table);
}
