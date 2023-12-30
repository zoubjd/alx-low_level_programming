#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: 'the program outputs the first 10 nums'
 * Return: (Success)
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
{
continue;
}
_putchar(i);
}
_putchar('\n');
}

