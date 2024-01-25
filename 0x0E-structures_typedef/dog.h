#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: the name of the doc
 * @age: the age of the dog
 * @owner: The name of the owner
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

