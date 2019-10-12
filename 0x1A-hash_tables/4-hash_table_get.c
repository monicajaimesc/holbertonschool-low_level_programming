#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: key you are looking for 
 * Return: the value associated element orNULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned int index;
    hash_node_t *node;

    if( !key || !ht || !ht->array)
		return (0);
    index = key_index((unsigned char *)key, ht->size);
    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            return (node->value);
        }
        node = node->next;

    }
    return (NULL);
}

