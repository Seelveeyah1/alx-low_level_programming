#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Return: Pointer to the newly created dog,
 * or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr != NULL)
	{
	new_dog_ptr->name = malloc(strlen(name) + 1);
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	if (new_dog_ptr->name != NULL && new_dog_ptr->owner != NULL)
	{
		strcpy(new_dog_ptr->name, name);
		strcpy(new_dog_ptr->owner, owner);
		new_dog_ptr->age = age;
	}
	else
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		new_dog_ptr = NULL;
	}
	}

	return (new_dog_ptr);
}
