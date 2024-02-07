#include "hash_tables.h"

/**
 * add_node - Adds a new node to the hash table
 * @ht: The hash table to add the node to
 * @key: The key of the node
 * @value: The value of the node
 * @index: The index where the node should be added
 *
 * Return: The newly created node
 */
hash_node_t *add_node(hash_table_t *ht, const char *key,
		      const char *value, unsigned long int index)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key to add
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	if (add_node(ht, key, value, index) == NULL)
		return (0);

	return (1);
}
