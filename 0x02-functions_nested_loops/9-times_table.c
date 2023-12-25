#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 * Description: 'the program outputs the multiple tables up to 9'
 * (Success)
 */
void times_table(void)
{
int i, j;
int result;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
if (result < 10)
{
_putchar(' ');
_putchar('0' + result);
}
else
{
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

