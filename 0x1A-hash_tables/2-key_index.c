#include "hash_tables.h"
/**
 * key_index - this compute the index of the table array using
 * djb2 algorithms
 * @key: the key
 * @size: the size of the array
 * Return: return the key_index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
