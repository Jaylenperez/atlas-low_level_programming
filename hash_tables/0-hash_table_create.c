#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table to create
 *
 * Return: pointer to the newly created hash table, or NULL if memory
 * allocation fails or size is invalid
 */
 hash_table_t *hash_table_create(unsigned long int size)
 {
    hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (table == NULL)
    {
        return (NULL);
    }

    table->size = size;
    table->count = 0;

    table->items = (hash_table_item_t **)calloc(size, sizeof(hash_table_item_t *));
    if (table->items == NULL)
    {
        free(table);
        return (NULL);
    }

    return (table);
 }
 