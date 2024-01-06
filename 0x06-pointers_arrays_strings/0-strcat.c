#include "main.h"

/**
 * _strcat - check the code
 * description: the program merges 2 strings
 * @dest: is the first string
 * @src: is the second string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return start;
}
