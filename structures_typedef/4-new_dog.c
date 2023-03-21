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
		return (NULL);
	new_dog->name = malloc(sizeof(new_dog->name) * namelen);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(new_dog->owner) * ownerlen);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i < ownerlen; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
