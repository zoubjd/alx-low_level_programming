#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'the program outputs the whole alphabets'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 97;
while (i < 10)
{
putchar('0' + i);
i++;
}
while (j < 103)
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
