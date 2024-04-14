#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array
 * Return: the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *new_table = malloc(sizeof(hash_table_t));

if (!new_table)
{
return (NULL);
}

new_table->array = malloc(sizeof(hash_node_t *) * size);
if (!new_table->array)
{
free(new_table);
return (NULL);
}

new_table->size = size;

for (i = 0; i < size; i++)
{
new_table->array[i] = NULL;
}

return (new_table);
}
