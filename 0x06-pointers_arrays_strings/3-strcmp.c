#include "main.h"
#include <string.h>

/**
 * _strcmp - check the code
 * description: the program compairs 2 strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);
if (len1 > len2)
{
return (15);
}
else if (len1 < len2)
{
return (-15);
}
else
{
return (0);
}
}
