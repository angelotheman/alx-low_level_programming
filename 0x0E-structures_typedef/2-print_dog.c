#include "dog.h"

/**
  * print_dog - Prints the struct dog
  * @d: first argument of struct
  *
  */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %lf\n", d->age ? d->age : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
