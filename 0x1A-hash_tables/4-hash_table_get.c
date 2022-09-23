#include "hash_tables.h"
/**
 * hash_table_get- retrieve a value using the key
 * @ht: the table to check to retrieve from
 * @key: the key to look for
 * Return: return the value of the key retrieved
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
	if (strcmp(key, node->key) == 0)
		return (node->value);
	}
	return (NULL);
}
