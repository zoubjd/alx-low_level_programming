#include <unistd.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * Description: 'the program outputs the first 10 nums'
 * Return: (Success)
 */

void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
_putchar(i);
}
_putchar('\n');
}

