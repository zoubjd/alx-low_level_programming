#include "main.h"

/**
 * _strcmp - check the code
 * description: the program compairs 2 strings
 * @s1: is the first string
 * @s2: is the second string
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
return (1);
}
else if (s1 < s2)
{
return (-1);
}
else
{
return (0);
}
}
