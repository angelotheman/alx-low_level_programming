#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - Creating a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: Point to the struct typedef
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *copy_name;
	char *copy_owner;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	copy_name = malloc(sizeof(char) * (strlen(name) + 1));

	if (copy_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	copy_owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (copy_owner == NULL)
	{
		free(copy_name);
		free(dog);
		return (NULL);
	}

	strcpy(copy_name, name);
	strcpy(copy_owner, owner);

	dog->name = copy_name;
	dog->age = age;
	dog->owner = copy_owner;

	return (dog);
}
