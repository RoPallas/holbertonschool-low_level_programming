#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: On succes a pointer a new_dow, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int namelen = 0, ownerlen = 0, i;

	while (name[namelen])
		namelen++;
	while (owner[ownerlen])
		ownerlen++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(namelen * sizeof(new_dog->name));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(ownerlen * sizeof(new_dog->owner));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
