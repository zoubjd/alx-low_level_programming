#include <stdio.h>
#include "dog.h"
 struct doggy
 {
	char *owner;
	char *name;
	float age;
 };
 

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct doggy *ptr;
	ptr = d;
	ptr->age = age;
	ptr->name = name;
	ptr->owner = owner;

}
