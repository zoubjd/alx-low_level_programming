#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Entry point
 * Description: 'the program modifys the pre existing struct'
 * @d: the pre existing struct
 * @name: the name that should be modifiyed
 * @owner: the owner that should be modifiyed
 * @age: the age that should be modifiyed
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->age = age;
d->name = name;
d->owner = owner;
}
}
