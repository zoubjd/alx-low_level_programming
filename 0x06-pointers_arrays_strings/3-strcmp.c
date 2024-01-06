#include "main.h"

/**
 * print_rev - check the code
 * description: the program gothers 2 strings
 * @dest: is the first string
 * @src: is the second string
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
while (*s1)
{
s1++;
}
while (*s2)
{
s2++;
}
if (s1 > s2)
{
return (15);
}
else if (s1 < s2)
{
return (-15);
}
else
{
return (0);
}
}
