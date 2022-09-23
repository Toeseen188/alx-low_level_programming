#include "hash_tables.h"
/**
 * hash_table_set- adds element to a table
 * @ht: hash table you want you add or update the key
 * @key: the key to the hash node to be added
 * @value: the value of the hash node to be added
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hn;
	char *val_dup;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
		free(ht->array[i]->value);
		ht->array[i]->value = val_dup;
		return (1);
		}
	}
	new_hn = malloc(sizeof(hash_node_t));

	if (new_hn == NULL)
	{
	free(val_dup);
	return (0);
	}
	new_hn->key = strdup(key);

	if (new_hn->key == NULL)
	{
	free(new_hn);
	return (0);
	}
	new_hn->value = val_dup;
	new_hn->next = ht->array[index];
	ht->array[index] = new_hn;
	return (1);
}
