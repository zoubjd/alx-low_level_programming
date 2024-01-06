#include "main.h"

/**
 * _strncat - check the code
 * description: the program gothers 2 strings
 * @dest: is the first string
 * @src: is the second string
 * @n: is the num of byte to take from src
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *start = dest;
while (*dest)
{
dest++;
}
while (*src && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (start);
}
