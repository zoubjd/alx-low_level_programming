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
int i = 25;
char alph[] = "abcdefghijklmnopqrstuvwxyz";
while (i >= 0)
{
putchar(alph[i]);
i--;
}
putchar('\n');
return (0);
}
