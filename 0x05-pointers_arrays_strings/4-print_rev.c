#include "main.h"

/**
 * print_rev - check the code
 * description: the program prints rev s
 * @s: the string
 * Return: Always 0.
 */

void print_rev(char *s)
{
const char *end = s;
while (*end) {
end++;
}
end--;
while (end >= s) {
_putchar(*end);
end--;
}
_putchar('\n');
}

