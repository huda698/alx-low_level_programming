#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct.
 *
 * @name: dog's name.
 *
 * @owner: dog's owner.
 *
 * @age: dog's age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
