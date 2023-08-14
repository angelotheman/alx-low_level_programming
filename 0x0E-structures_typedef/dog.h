#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Giving the properties of a dog
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Description: This struct gives attributes of a dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - Typedef for struct dog
  */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
