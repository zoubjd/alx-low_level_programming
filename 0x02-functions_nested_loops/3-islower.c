#include <unistd.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: 'the program outputs 1 if  is lower case'
 * @c: is the ccharacter that's checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}

