#include "main.h"

/**
 * _puts - check the code
 * description: the progrogram prints
 * @str: the string
 * Return: Always 0.
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

