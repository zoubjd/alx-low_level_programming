#include <unistd.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * Description: 'the program outputs the first 15 nums'
 * Return: (Success)
 */

void more_numbers(void)
{
int i;
int j;
for (j = 0 ; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i > 9 && (i / 10) > 0)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10));
}
_putchar('\n');
}
}

