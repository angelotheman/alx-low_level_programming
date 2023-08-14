#include "dog.h"
#include <stdio.h>

/**
  * init_dog - Function initialization
  * @d: first arg
  * @name: second arg
  * @age: third arg
  * @owner: fourth arg
  *
  * Return: 0 (Success)
  * Description: Initialize a struct class of dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
