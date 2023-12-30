#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: 'the program outputs a number of /'
 * @n: is the num of /s
 * Return: (Success)
 */

void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

