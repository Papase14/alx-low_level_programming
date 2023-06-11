#include "shash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: size of the array.
  * Return: pointer to newly created hash table.
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_t;
	unsigned long int i;

	/* create a table size of the struct for table */
	new_t = malloc(sizeof(shash_table_t));
	if (new_t == NULL || size == 0)
		return (NULL);

	/* create an array of size size array is a member of struct table */
	new_t->array = malloc(sizeof(void *) * size);
	if (new_t->array == NULL)
		return (NULL);

	new_t->size = size;
	/* initialize the array to null */
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}

/**
  * shash_table_set - adda an element to the hash table.
  * @ht: hash table to add or update the key value to
  * @key: key (string cannot be empty).
  * @value: associated with key, (can be an empty string).
  * Return: 1 if successful 0 if not.
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *shash_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		} temp = temp->next;
	}

	shash_node = malloc(sizeof(shash_node_t));
	if (shash_node == NULL)
		return (0);

	shash_node->key = strdup(key);
	shash_node->value = strdup(value);
	shash_node->next = ht->array[index];
	ht->array[index] = shash_node;

	return (1);
}

/**
  * shash_table_get - retrieves a value associated with a key.
  * @ht: hash table to be looked into.
  * @key: key being looked for.
  * Return: value or Null if not found.
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
  * shash_table_print - prints a hash table.
  * @ht: hash table
  * Return: nothing
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int i = 0;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (flag == 0)
					flag = 1;
				else
					printf(", ");

				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		} printf("}\n");
	}
}

/**
  * shash_table_delete - deletes a hash table.
  * @ht: hash table to be deleted.
  */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *temp2;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	} free(ht->array);
	free(ht);
}
