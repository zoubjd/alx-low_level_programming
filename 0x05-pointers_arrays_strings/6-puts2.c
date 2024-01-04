#include "main.h"

/**
 * puts2 - check the code
 * description: the program prints some chars
 * @str: the string
 * Return: Always 0.
 */

void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str = str + 2;
}
_putchar('\n');
}

