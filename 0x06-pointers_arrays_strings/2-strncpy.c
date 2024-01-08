#include "main.h"

/**
 * _strncpy - check the code
 * description: the program copies a string to another
 * @dest: is the first string
 * @src: is the second string
 * @n: is the num of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
char *start = dest;
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
if (i < n)
{
*dest = '\0';
}
return (start);
}

