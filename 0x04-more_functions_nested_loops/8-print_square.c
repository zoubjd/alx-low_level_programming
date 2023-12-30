#include <unistd.h>
#include "main.h"
/**
 * print_square - Entry point
 * Description: 'the program outputs a number of squares'
 * @size: is the num of _s
 * Return: (Success)
 */

void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

