#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current;
unsigned long int i;
if (ht == NULL)
{
return;
}
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
free(current->key);
free(current->value);
free(current);
current = current->next;
}
}
free(ht->array);
free(ht);
}
