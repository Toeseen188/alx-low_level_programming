#include "hash_tables.h"
/**
 * hash_table_get- retrieve a value using the key
 * @ht: the table to check to retrieve from
 * @key: the key to look for
 * Return: return the value of the key retrieved
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	char *value = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
	if (strcmp(key, ht->array[i]->key) == 0)
		value = ht->array[i]->value;
	}
	return (value);
}
