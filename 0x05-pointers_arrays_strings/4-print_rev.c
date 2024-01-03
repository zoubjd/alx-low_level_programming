#include "main.h"

/**
 * print_rev - check the code
 * description: the program prints rev s
 * @s: the string
 * Return: Always 0.
 */

void print_rev(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
while (count > 0)
{
_putchar(*s);
count--;
s--;
}
_putchar('\n');
}

