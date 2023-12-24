#include <unistd.h>
#include <stddef.h>
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
write(1, "00:00", 5);
while (hours < 24)
{
while (minutes < 60)
{
if (hours < 10)
{
write(1, "0", 1);
write(1, &hours, sizeof(hours));
}
else
{
write(1, &hours, sizeof(hours));
}
write(1, ":", 1);
if (minutes < 10)
{
write(1, "0", 1);
write(1, &minutes, sizeof(minutes));
}
else
{
write(1, &minutes, sizeof(minutes));
}
minutes++;
}
hours++;
}
}
