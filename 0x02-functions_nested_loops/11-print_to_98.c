#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: 'the program outputs the number from n to 98'
 * @n: is the number to count from
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d \n", i);
}
else
{
printf("%d, ", i);
}
}
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d \n", i);
}
else
{
printf("%d, ", i);
}
}
}
else
{
printf("%d ", 98);
}
}

