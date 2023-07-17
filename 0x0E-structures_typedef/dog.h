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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
