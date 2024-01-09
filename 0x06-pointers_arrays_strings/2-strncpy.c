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
    char *start = dest;
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for ( ; i < n; i++)
    {
        dest[i] = '\0';
    }

    return start;
}

