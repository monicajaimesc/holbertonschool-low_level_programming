#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table 
 *@ht:  hash table to add or update the key/value to
 *@key: is the key (no empty string) 
 *@value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node; /* head */
	hash_node_t *walk; 

	if( !key || !value || !ht || !ht->array)
		return (0);


	/* size structure */
	index = key_index((unsigned char *)key, ht->size);
        if (ht->array[index])
	{
		/* walking in the linked list */
		walk = ht->array[index];
		/* int strcmp(const char *, const char *) */
		/* if the node is occupy, walk to next */
		while (walk && strcmp(walk->key, key) != 0 )
			walk = walk->next;
		
		if (walk && strcmp(walk->key, key) == 0 )
		{	/* value must be duplicated */
			free(walk->value);
			walk->value =strdup(value);
			/* element added */
			return (1);
		}
	}
	/* element not added */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
		
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
