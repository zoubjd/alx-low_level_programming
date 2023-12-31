#include <unistd.h>
#include "main.h"
/**
 * print_triangle - Entry point
 * Description: 'the program outputs a number of tringles'
 * @size: is the height
 * Return: (Success)
 */

void print_triangle(int size)
{
int i = 0;
if (size > 0)
{
while (i < size)
{
int j = 0;
int y = 0;
while (j < (size - i - 1))
{
_putchar(' ');
j++;
}
while (y <= i)
{
_putchar(35);
y++;
}
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}

