#include "dog.h"

/**
 * init_dog - A function that initializes a variable of
 * type struct dog
 * @d: Function to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
