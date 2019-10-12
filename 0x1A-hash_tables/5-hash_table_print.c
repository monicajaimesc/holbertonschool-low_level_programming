#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 *@ht: is the hash table
 * return: nothing is void but it prints
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
/* used to determine the next step of a program */
	unsigned int flag;

	flag = 0;
	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
		while (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			flag = 1;
			ht->array[i] = ((ht->array[i])->next);
		}
	printf("}\n");

}
