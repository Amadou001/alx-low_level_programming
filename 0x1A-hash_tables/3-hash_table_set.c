#include "hash_tables.h"
/**
 * hash_table_set - adds or updates an element to the hash table.
 * @ht: the hash table
 * @key: the key
 * @value: the value of the key
 * Return: 1 in success or 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *current;
const unsigned char *key_cast;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}
key_cast = (const unsigned char *)key;
index = key_index(key_cast, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(key, current->key) == 0)
{
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
{
return (0);
}
return (1);
}
current = current->next;
}
return (node_creation(ht, key, value, index));
}


/**
 * node_creation - creates a new node and adds it at the begining
 * of the list
 * @ht: the hash table
 * @key: the key
 * @value: the value of the key
 * @index: the index of the key inside the hash table
 * Return: 1 if it succeded or 0 otherwise
*/
int node_creation(hash_table_t *ht,
const char *key,
const char *value,
unsigned long int index)
{
hash_node_t *new_node;
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup(key);
if (new_node == NULL)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (new_node == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
