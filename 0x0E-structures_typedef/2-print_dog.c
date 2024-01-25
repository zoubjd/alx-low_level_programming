#include <stdio.h>
#include "dog.h"

/**
* print_dog - Entry point
* Description: 'the program modifys the pre existing struct'
* @d: the pre existing struct
* Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
		printf("Name: (nil)\n");
		}
		else
		{
		printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
		printf("owner: (nil)\n");
		}
		else
		{
		printf("owner: %s\n", d->owner);
		}
	}
}
