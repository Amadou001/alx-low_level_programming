#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current;
unsigned long int size = 0;
int first = 1;
if (ht == NULL)
{
return;
}
printf("{");
while (size < ht->size)
{
if (ht->array[size] != NULL)
{
current = ht->array[size];
while (current != NULL)
{
if (first)
{
first = 0;
}
else
{
printf(", ");
}
printf("'%s: '%s'", current->key, current->value);
current = current->next;
}
}
size++;
}
printf("}\n");
}
