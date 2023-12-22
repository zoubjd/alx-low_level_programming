#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * Description: 'the program outputs the absoulute value of n'
 * @n: is the ccharacter that's checked
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
{
n = -n;
}
return (n);
}

