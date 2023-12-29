#include <unistd.h>
#include "main.h"
/**
 * _isupper - Entry point
 * Description: 'the program outputs if c is upper'
 * @c: is the ccharacter that's checked
 * Return: (Success)
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}

