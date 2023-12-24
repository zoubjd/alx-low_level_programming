#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: 'the program outputs every hour and minute of the day'
 * (Success)
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
while (hours < 24)
{
while (minutes < 60)
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (minutes / 10));
_putchar('0' + (minutes % 10));
_putchar('\n');
minutes++;
}
minutes = 0;
hours++;
}
}

