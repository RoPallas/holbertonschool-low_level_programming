#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data of dogs
 * @name: of dog
 * @age: of dog
 * @owner: name of the dog's owner
 *
 * Description: struct to save data about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
