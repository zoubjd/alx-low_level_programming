#include "main.h"

/**
 * _strcpy - check the code
 * description: the program coppies a strig into another
 * @dest: the destination string
 * @src: the source string
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
char *finish = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
return (finish);
}

