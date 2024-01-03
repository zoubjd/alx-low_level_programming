#include "main.h"

/**
 * _strlen - check the code
 * description: the progroums returns the lenght
 * @s: the string
 * Return: Always 0.
 */

int _strlen(char *s)
{
int count = 0;
while (*s != '\0') {
count++;
s++;
}
return count;
}
