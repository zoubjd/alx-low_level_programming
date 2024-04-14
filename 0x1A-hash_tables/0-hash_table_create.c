#include "hash_tables.h"

/**
 * hash_table_create - check code
 * description: creates a new hash table
 *
 * @size: the size of the array
 *
 * Return: the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
int i;
hash_table_t *new_table = malloc(sizeof(hash_table_t));

if (!new_table)
{
return (NULL);
}
new_table->array = malloc(sizeof(int) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}
for (i = 0; i < size; i++)
{
    new_table->array[i] = NULL;
}

return (new_table);
}
