#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/*
 * struct dog - Short description
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Description: this is a description for the dog structure
 */
struct dog
{
char *name;
float age;
char *owner;
};

int main(void)
{
struct dog my_dog;
my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
