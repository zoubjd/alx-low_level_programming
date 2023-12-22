#include <unistd.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * Description: 'the program outputs 1 if c is an alphabet'
 * @c: is the ccharacter that's checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
