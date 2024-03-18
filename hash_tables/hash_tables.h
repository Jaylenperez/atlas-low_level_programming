#ifndef HASH_TABLES_H
#define HASH_TABLES_H

typedef struct hash_table_item
{
    char *key;
    void *value;
} hash_table_item_t;

typedef struct hash_table
{
    unsigned long int size;
    unsigned long int count;
    hash_table_item_t **items;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif