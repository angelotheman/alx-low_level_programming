#include "dog.h"

/**
  * print_dog - Prints the struct dog
  * @d: first argument of struct
  *
  */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d = NULL)
		exit(1);

	printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner);
}
