#ifndef DOG_H
#define DOG_H


/**
 * struct dog - definition of an instance of dog
 *
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 */

struct dog
{
	/* elements of new dog type */
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);



#endif
