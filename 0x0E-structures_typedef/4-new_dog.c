#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - create a new dog.
 * @name: dog's name.
 * @age: do's age.
 * @owner: dog's owner.
 * Return: NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*dog).owner == NULL)
        {
		free(dog->name);
                free(dog);
                return (NULL);
        }
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}
