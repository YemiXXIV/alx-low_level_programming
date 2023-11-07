#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog,
 * or NULL if allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *n, *o;
	int i = 0, j = 0, k, l;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(new_dog);
		free(a);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (l = 0; l <= j; l++)
		o[l] = owner[l];
	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = 0;

	return (new_dog);
}
