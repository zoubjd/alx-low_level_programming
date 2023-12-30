#include <unistd.h>
#include "main.h"
/**
 * print_line - Entry point
 * Description: 'the program outputs a number of lines'
 * @n: is the num of _s
 * Return: (Success)
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}

